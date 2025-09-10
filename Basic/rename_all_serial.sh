#!/bin/bash

# === CONFIG ===
PREFIX="multithreading_"
EXT=".cpp"
LOG_FILE="serial_rename_log.txt"
MANIFEST_FILE="serial_manifest.txt"
UNDO_SCRIPT="undo_serial_rename.sh"
DRY_RUN=false  # Set to true to simulate renaming

> "$LOG_FILE"
> "$MANIFEST_FILE"
echo "#!/bin/bash" > "$UNDO_SCRIPT"
echo "# Undo script generated on $(date '+%Y-%m-%d %H:%M:%S')" >> "$UNDO_SCRIPT"

# === FUNCTION ===
serial_rename_safe() {
  files=($(ls ${PREFIX}*${EXT} 2>/dev/null | sort))
  temp_names=()
  counter=1

  # === PASS 1: Rename to temporary names ===
  for old_name in "${files[@]}"; do
    temp_name="${old_name}.tmp_rename"
    temp_names+=("$temp_name")
    echo "$(date '+%Y-%m-%d %H:%M:%S') - Temp rename: \"$old_name\" → \"$temp_name\"" | tee -a "$LOG_FILE"
    echo "mv \"$temp_name\" \"$old_name\"" >> "$UNDO_SCRIPT"
    if [ "$DRY_RUN" = false ]; then
      mv "$old_name" "$temp_name"
    fi
  done

  # === PASS 2: Rename temp files to final serial names ===
  for temp_name in "${temp_names[@]}"; do
    final_name="${PREFIX}$(printf "%02d" $counter)${EXT}"
    echo "$(date '+%Y-%m-%d %H:%M:%S') - Final rename: \"$temp_name\" → \"$final_name\"" | tee -a "$LOG_FILE"
    echo "$temp_name → $final_name" >> "$MANIFEST_FILE"
    echo "mv \"$final_name\" \"$temp_name\"" >> "$UNDO_SCRIPT"
    if [ "$DRY_RUN" = false ]; then
      mv "$temp_name" "$final_name"
    fi
    ((counter++))
  done
}

# === EXECUTE ===
serial_rename_safe

echo "✅ Safe serial renaming complete. Log: \"$LOG_FILE\""
echo "📘 Manifest: \"$MANIFEST_FILE\""
echo "↩️ Undo script: \"$UNDO_SCRIPT\""
