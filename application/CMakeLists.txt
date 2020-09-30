add_executable(apps main.cpp)
target_compile_features(apps PRIVATE cxx_std_17)

target_link_libraries(apps PRIVATE project_library)