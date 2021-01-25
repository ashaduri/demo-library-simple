cmake_minimum_required(VERSION 3.0)

# Set the project name
project(demo-library-simple)

# Foo library is dynamic by default. Introduce a switch to override that.
option(FOO_LIBRARY_STATIC "Compile foo_library as static library" OFF)


add_subdirectory(foo_library)
add_subdirectory(demo_binary)

