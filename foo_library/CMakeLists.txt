

# This library is compiled as a DYNAMIC library by default, unless
# FOO_LIBRARY_STATIC is set to TRUE.
if (NOT DEFINED FOO_LIBRARY_STATIC)
	set(FOO_LIBRARY_STATIC FALSE)
endif()

# List all library sources
set(FOO_LIBRARY_SOURCES
	foo_library.h
	foo_library.cpp
	foo_support.h
)

# Create static or shared library target.
if (FOO_LIBRARY_STATIC)
	# Static
	add_library(foo_library STATIC ${FOO_LIBRARY_SOURCES})

	# Define FOO_LIBRARY_STATIC when building and using this library.
	target_compile_definitions(foo_library
		PUBLIC
			FOO_LIBRARY_STATIC
	)

else()
	# Dynamic
	add_library(foo_library SHARED ${FOO_LIBRARY_SOURCES})

	# Make all non-exported symbols are hidden by default (similar to Windows)
	set_target_properties(foo_library
		PROPERTIES
			C_VISIBILITY_PRESET hidden
			CXX_VISIBILITY_PRESET hidden
	)
endif()

# Treat the exported symbols as exported (and not imported) when building the library
target_compile_definitions(foo_library
	PRIVATE
		FOO_LIBRARY_BUILD
)

# Export the library's public include path to dependent targets
target_include_directories(foo_library
	INTERFACE
		${CMAKE_CURRENT_SOURCE_DIR}
)

