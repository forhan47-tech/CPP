#!/bin/bash
# Correction script: Create folders and transfer all uploaded C++ files

# Create recommended folders
mkdir -p 01_structure 02_data_types 03_operators 04_control_flow 05_functions \
         06_oop 07_memory_management 08_templates 09_exceptions \
         10_stl/{algorithms,containers,iterators} \
         11_modern_cpp 12_multithreading 13_file_handling \
         14_cpp_library/{ctype,cstring,cmath,complex,numeric,utility,bitset,limits,type_traits,chrono,filesystem,random,regex,thread,atomic,initializer_list} \
         projects/{src,include,build} scripts library tests docs build

# --- 01_structure ---
mv basic_syntax*.cpp 01_structure/
mv blocks_*.cpp 01_structure/
mv comments*.cpp 01_structure/
mv namespace*.cpp 01_structure/
mv preprocessor*.cpp 01_structure/

# --- 02_data_types ---
mv array_*.cpp 02_data_types/
mv char_array*.cpp 02_data_types/
mv string*.cpp 02_data_types/
mv string2D*.cpp 02_data_types/
mv struct_type*.cpp 02_data_types/
mv variable_type*.cpp 02_data_types/
mv enum_type*.cpp 02_data_types/
mv bool_type*.cpp 02_data_types/
mv aliases_type*.cpp 02_data_types/

# --- 03_operators ---
mv operator_*.cpp 03_operators/
mv comparator*.cpp 03_operators/
mv type_casting*.cpp 03_operators/

# --- 04_control_flow ---
mv for_*.cpp 04_control_flow/
mv while_*.cpp 04_control_flow/
mv do_while*.cpp 04_control_flow/
mv elseIf_*.cpp 04_control_flow/
mv switch_*.cpp 04_control_flow/
mv goto_*.cpp 04_control_flow/
mv break_*.cpp 04_control_flow/
mv continue_*.cpp 04_control_flow/
mv infinite_loop*.cpp 04_control_flow/

# --- 05_functions ---
mv function_*.cpp 05_functions/
mv arguments*.cpp 05_functions/
mv return*.cpp 05_functions/

# --- 06_oop ---
mv class_*.cpp 06_oop/
mv constructor_*.cpp 06_oop/
mv destructor_*.cpp 06_oop/
mv inheritance_*.cpp 06_oop/
mv polymorphism*.cpp 06_oop/
mv encapsulation*.cpp 06_oop/
mv abstraction*.cpp 06_oop/
mv abstract_class*.cpp 06_oop/
mv interface_class*.cpp 06_oop/
mv friend_class*.cpp 06_oop/
mv operator_overloading*.cpp 06_oop/
mv event_handling*.cpp 06_oop/
mv nested_class*.cpp 06_oop/
mv local_class*.cpp 06_oop/
mv static_method*.cpp 06_oop/
mv setter_function*.cpp 06_oop/
mv function_overloading*.cpp 06_oop/
mv vector_object*.cpp 06_oop/
mv array_object*.cpp 06_oop/
mv dynamic_object*.cpp 06_oop/
mv copy_object*.cpp 06_oop/
mv concrete_class*.cpp 06_oop/
mv standalone_class*.cpp 06_oop/
mv accessed_method*.cpp 06_oop/
mv final_class*.cpp 06_oop/
mv function_class*.cpp 06_oop/
mv member_function*.cpp 06_oop/
mv polymorphic_class*.cpp 06_oop/
mv functors*.cpp 06_oop/
mv swap_object*.cpp 06_oop/
mv this_pointer*.cpp 06_oop/
# Fix misplaced multithreading files
mv 06_oop/multithreading_*.cpp 12_multithreading/

# --- 07_memory_management ---
mv pointer*.cpp 07_memory_management/
mv reference_type*.cpp 07_memory_management/
mv dynamic_memory*.cpp 07_memory_management/
mv smart_pointer*.cpp 07_memory_management/
mv null_pointer*.cpp 07_memory_management/
mv null_statement*.cpp 07_memory_management/

# --- 08_templates ---
mv template_class*.cpp 08_templates/
mv template_type*.cpp 08_templates/
mv pair_*.cpp 08_templates/
mv tuple_*.cpp 08_templates/

# --- 09_exceptions ---
mv error_handling*.cpp 09_exceptions/
mv event_handling*.cpp 09_exceptions/

# --- 10_stl ---
mv 10_stl/containers/* 10_stl/containers/
mv 10_stl/iterators/* 10_stl/iterators/
mv 10_stl/algorithms/algorithm_library*.cpp 10_stl/algorithms/
# Move standard library demos into 14_cpp_library
mv 10_stl/algorithms/cmath_library*.cpp 14_cpp_library/cmath/
mv 10_stl/algorithms/cstring_library*.cpp 14_cpp_library/cstring/
mv 10_stl/algorithms/cctype_library*.cpp 14_cpp_library/ctype/
mv 10_stl/algorithms/complex_library*.cpp 14_cpp_library/complex/
mv 10_stl/algorithms/numeric_library*.cpp 14_cpp_library/numeric/
mv 10_stl/algorithms/utility_library*.cpp 14_cpp_library/utility/
mv 10_stl/algorithms/bitset_library*.cpp 14_cpp_library/bitset/

# --- 11_modern_cpp ---
mv auto_type*.cpp 11_modern_cpp/
mv range_for*.cpp 11_modern_cpp/
mv lambda_function*.cpp 11_modern_cpp/
mv lambda_functon*.cpp 11_modern_cpp/   # fix typo in filenames

# --- 12_multithreading ---
mv multithreading*.cpp 12_multithreading/

# --- 13_file_handling ---
mv file_handling*.cpp 13_file_handling/
mv input_handling*.cpp 13_file_handling/
mv formatted_output*.cpp 13_file_handling/
mv sstream_library*.cpp 13_file_handling/

# --- Projects ---
mv projects/src/* projects/src/
mv projects/include/* projects/include/
mv projects/build/* projects/build/
mv projects/CMakeLists.txt projects/
mv projects/Makefile projects/

# --- Scripts ---
mv scripts/* scripts/
mv rearrange.sh scripts/
mv refine_basic.sh scripts/

# --- Library ---
mv library/* library/

# Leave tests, docs, build empty for now
echo "Rearrangement complete!"
