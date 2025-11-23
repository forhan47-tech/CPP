#!/bin/bash
# Rearrange C++ learning files into recommended folders

# Create recommended folders
mkdir -p 01_structure 02_data_types 03_operators 04_control_flow 05_functions \
         06_oop 07_memory_management 08_templates 09_exceptions 10_stl \
         11_modern_cpp 12_multithreading 13_file_handling projects scripts \
         library tests docs build

# Move files from Basic → structure, data types, operators, control flow, functions, memory, templates, exceptions, modern
mv Basic/basic_syntax* 01_structure/
mv Basic/comments* 01_structure/
mv Basic/preprocessor* 01_structure/
mv Basic/namespace* 01_structure/

mv Basic/variable_type* 02_data_types/
mv Basic/enum_type* 02_data_types/
mv Basic/struct_type* 02_data_types/
mv Basic/char_array* 02_data_types/
mv Basic/bool_type* 02_data_types/

mv Basic/operator_* 03_operators/
mv Basic/type_casting* 03_operators/
mv Basic/comparator* 03_operators/

mv Basic/for_* 04_control_flow/
mv Basic/while_* 04_control_flow/
mv Basic/do_while* 04_control_flow/
mv Basic/elseIf_* 04_control_flow/
mv Basic/switch_* 04_control_flow/
mv Basic/goto_* 04_control_flow/
mv Basic/break_* 04_control_flow/
mv Basic/continue_* 04_control_flow/

mv Basic/function_* 05_functions/
mv Functions/* 05_functions/

mv Basic/dynamic_memory* 07_memory_management/
mv Basic/smart_pointer* 07_memory_management/
mv Basic/reference_type* 07_memory_management/

mv Basic/template_type* 08_templates/
mv Basic/tuple_* 08_templates/
mv OOP/template_class* 08_templates/

mv Basic/error_handling* 09_exceptions/
mv OOP/error_handling* 09_exceptions/

mv STL/* 10_stl/

mv Basic/auto_type* 11_modern_cpp/
mv Basic/range_for* 11_modern_cpp/
mv Basic/lambda_functon* 11_modern_cpp/
mv OOP/lambda_function* 11_modern_cpp/

mv Multithreading/* 12_multithreading/
mv "File Handling"/* 13_file_handling/

mv OOP/* 06_oop/
mv Library/* library/
mv Script/* scripts/
mv Project/* projects/

# Leave tests, docs, build empty for now
echo "Rearrangement complete!"
