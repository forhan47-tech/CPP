#!/bin/bash

# === CONFIG ===
LOG_FILE="rename_log.txt"
MANIFEST_FILE="manifest_after_rename.txt"
UNDO_SCRIPT="undo_rename.sh"
DRY_RUN=false  # Set to true to simulate renaming without applying changes

> "$LOG_FILE"
> "$MANIFEST_FILE"
echo "#!/bin/bash" > "$UNDO_SCRIPT"
echo "# Undo script generated on $(date)" >> "$UNDO_SCRIPT"
echo "# ⚠️ Review before execution" >> "$UNDO_SCRIPT"

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
    if [[ "$base" =~ ^${prefix}[0-9]{2}\.${extension#*.}$ ]]; then
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

  echo "📂 Category '$prefix': $((${#files[@]})) files processed" >> "$LOG_FILE"
}

# === AUTO-DETECT PREFIXES ===
detect_prefixes() {
  ext=$1
  ls *"$ext" 2>/dev/null | sed -E "s/[0-9]+$ext//" | sed "s/$ext$//" | sort -u
}

# === APPLY TO DETECTED PREFIXES ===
for ext in ".cpp" ".txt" ".sh"; do
  for prefix in $(detect_prefixes "$ext"); do
    rename_by_prefix "$prefix" "$ext"
  done
done

echo "✅ Renaming complete. Log saved to $LOG_FILE"
echo "📘 Manifest saved to $MANIFEST_FILE"
echo "↩️ Undo script saved to $UNDO_SCRIPT"
