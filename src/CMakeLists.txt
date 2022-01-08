# Application target
add_executable(flashd
	main.c
	flashd_app.c
	flashd_app_win.c
)

target_link_libraries(flashd PUBLIC ${GTK_LIBRARIES})

