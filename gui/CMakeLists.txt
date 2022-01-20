# Generate GLib resources
find_program(GLIB_COMPILE_RESOURCES NAMES glib-compile-resources REQUIRED)

set(GRESOURCE_OUT resources.c)
set(GRESOURCE_DIR resources)
set(GRESOURCE_XML ndexapp.gresource.xml)

add_custom_command(
	OUTPUT			${GRESOURCE_OUT}
	WORKING_DIRECTORY	${CMAKE_CURRENT_SOURCE_DIR}/${GRESOURCE_DIR}
	COMMAND			${GLIB_COMPILE_RESOURCES}
	ARGS
		${GRESOURCE_XML}
		--target=${CMAKE_CURRENT_BINARY_DIR}/${GRESOURCE_OUT}
		--generate-source
	VERBATIM
	MAIN_DEPENDENCY		${GRESOURCE_DIR}/${GRESOURCE_XML}
	DEPENDS
		${GRESOURCE_DIR}/window.ui
)

# Application target
add_executable(ndex
	main.c
	ndex_app.c
	ndex_app_win.c
	${CMAKE_CURRENT_BINARY_DIR}/${GRESOURCE_OUT}
)

target_link_libraries(ndex PUBLIC ${GTK_LIBRARIES})

