#!/bin/bash
# Refine Basic folder redistribution

mv Basic/blocks_* 01_structure/
mv Basic/aliases_type* 02_data_types/
mv Basic/array_* 02_data_types/
mv Basic/string* 02_data_types/
mv Basic/string2D* 02_data_types/

mv Basic/infinite_loop* 04_control_flow/

mv Basic/arguments_* 05_functions/
mv Basic/return_* 05_functions/

mv Basic/null_pointer.cpp 07_memory_management/
mv Basic/null_statement.cpp 07_memory_management/
mv Basic/pointer_01.cpp 07_memory_management/

mv Basic/pair_* 08_templates/

mv Basic/event_handling* 09_exceptions/

mv Basic/iterator_* 10_stl/
mv Basic/bitset_library* 10_stl/
mv Basic/complex_library* 10_stl/
mv Basic/cstring_library* 10_stl/
mv Basic/cctype_library* 10_stl/
mv Basic/numeric_library* 10_stl/
mv Basic/utility_library* 10_stl/

mv Basic/input_handling* 13_file_handling/
mv Basic/sstream_library* 13_file_handling/
mv Basic/formatted_output* 13_file_handling/

# Remove Basic if empty
rmdir Basic 2>/dev/null

echo "Basic folder redistributed and removed if empty."
