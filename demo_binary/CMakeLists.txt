
set(DEMO_SOURCES
	demo.cpp
)

add_executable(demo ${DEMO_SOURCES})
target_link_libraries(demo
	PRIVATE
		foo_library
)

