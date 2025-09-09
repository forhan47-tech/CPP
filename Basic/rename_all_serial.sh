#!/bin/bash

# === CONFIG ===
LOG_FILE="rename_log.txt"
MANIFEST_FILE="manifest_after_rename.txt"
UNDO_SCRIPT="undo_rename.sh"
DRY_RUN=false  # Set to true to simulate renaming without applying changes

> "$LOG_FILE"
> "$MANIFEST_FILE"
> "$UNDO_SCRIPT"

# === FUNCTION ===
rename_by_prefix() {
  prefix=$1
  extension=$2
  i=1

  all_files=$(ls ${prefix}*${extension} 2>/dev/null)
  non_serial=()
  serial=()

  for file in $all_files; do
    base=$(basename "$file")
    if [[ "$base" =~ ${prefix}[0-9]{2}${extension} ]]; then
      serial+=("$file")
    else
      non_serial+=("$file")
    fi
  done

  files=("${non_serial[@]}" "${serial[@]}")

  for file in "${files[@]}"; do
    new_name="${prefix}$(printf "%02d" $i)${extension}"

    if [ "$file" == "$new_name" ]; then
      echo "Skipping (already named): $file" | tee -a "$LOG_FILE"
    elif [ -e "$new_name" ]; then
      echo "⚠️ Conflict: $new_name exists. Shifting files..." | tee -a "$LOG_FILE"
      j=$((i + 1))
      while [ -e "${prefix}$(printf "%02d" $j)${extension}" ]; do
        ((j++))
      done
      while [ $j -gt $i ]; do
        src="${prefix}$(printf "%02d" $((j - 1)))${extension}"
        dst="${prefix}$(printf "%02d" $j)${extension}"
        echo "Shifting: $src → $dst" | tee -a "$LOG_FILE"
        if [ "$DRY_RUN" = false ]; then
          mv "$src" "$dst"
          echo "mv \"$dst\" \"$src\"" >> "$UNDO_SCRIPT"
        fi
        ((j--))
      done
      echo "Renaming (after shift): $file → $new_name" | tee -a "$LOG_FILE"
      if [ "$DRY_RUN" = false ]; then
        mv "$file" "$new_name"
        echo "mv \"$new_name\" \"$file\"" >> "$UNDO_SCRIPT"
      fi
    else
      echo "Renaming: $file → $new_name" | tee -a "$LOG_FILE"
      if [ "$DRY_RUN" = false ]; then
        mv "$file" "$new_name"
        echo "mv \"$new_name\" \"$file\"" >> "$UNDO_SCRIPT"
      fi
    fi

    echo "$new_name" >> "$MANIFEST_FILE"
    ((i++))
  done
}

# === APPLY TO ALL CATEGORIES ===
rename_by_prefix "array_" ".cpp"
rename_by_prefix "array2D_" ".cpp"
rename_by_prefix "vector_" ".cpp"
rename_by_prefix "vector2D_" ".cpp"
rename_by_prefix "algorithm_library" ".cpp"
rename_by_prefix "multithreading_" ".cpp"
rename_by_prefix "file_handling" ".cpp"
rename_by_prefix "lambda_functon" ".cpp"
rename_by_prefix "pair_" ".cpp"
rename_by_prefix "tuple_" ".cpp"
rename_by_prefix "map_" ".cpp"
rename_by_prefix "set_" ".cpp"
rename_by_prefix "unordered_map_" ".cpp"
rename_by_prefix "unordered_set_" ".cpp"
rename_by_prefix "stack_" ".cpp"
rename_by_prefix "queue_" ".cpp"
rename_by_prefix "priority_queue_" ".cpp"
rename_by_prefix "list_" ".cpp"
rename_by_prefix "forward_list" ".cpp"
rename_by_prefix "function_" ".cpp"
rename_by_prefix "function_container" ".cpp"
rename_by_prefix "function_reference" ".cpp"
rename_by_prefix "function_string" ".cpp"
rename_by_prefix "iterator_" ".cpp"
rename_by_prefix "range_for" ".cpp"
rename_by_prefix "sstream_library" ".cpp"
rename_by_prefix "error_handling" ".cpp"
rename_by_prefix "event_handling" ".cpp"
rename_by_prefix "dynamic_memory" ".cpp"
rename_by_prefix "smart_pointer" ".cpp"
rename_by_prefix "template_type" ".cpp"
rename_by_prefix "struct_type" ".cpp"
rename_by_prefix "union_type" ".cpp"
rename_by_prefix "reference_type" ".cpp"
rename_by_prefix "string2D_" ".cpp"
rename_by_prefix "string_" ".cpp"
rename_by_prefix "deque_" ".cpp"
rename_by_prefix "numeric_library" ".cpp"
rename_by_prefix "bitset_library" ".cpp"
rename_by_prefix "complex_library" ".cpp"
rename_by_prefix "utility_library" ".cpp"
rename_by_prefix "comparator_" ".cpp"
rename_by_prefix "namespace_" ".cpp"
rename_by_prefix "cin_cout" ".cpp"
rename_by_prefix "char_array" ".cpp"
rename_by_prefix "cmath_library" ".cpp"
rename_by_prefix "cstring_library" ".cpp"
rename_by_prefix "cctype_library" ".cpp"
rename_by_prefix "basic_syntax" ".cpp"
rename_by_prefix "type_casting" ".cpp"
rename_by_prefix "null_pointer" ".cpp"
rename_by_prefix "boolean_type" ".cpp"
rename_by_prefix "auto_type" ".cpp"
rename_by_prefix "aliases_type" ".cpp"
rename_by_prefix "formatted_output" ".cpp"
rename_by_prefix "container_input" ".cpp"
rename_by_prefix "multimap_" ".cpp"
rename_by_prefix "multiset_" ".cpp"
rename_by_prefix "output" ".txt"
rename_by_prefix "input" ".txt"
rename_by_prefix "data" ".txt"

echo "✅ Renaming complete. Log saved to $LOG_FILE"
echo "📘 Manifest saved to $MANIFEST_FILE"
echo "↩️ Undo script saved to $UNDO_SCRIPT"
