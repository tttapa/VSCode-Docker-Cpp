# Add a new executable that is built from the given source file(s)
add_executable(hello-world main.cpp)

# Link the necessary libraries to the application
target_link_libraries(hello-world greet)