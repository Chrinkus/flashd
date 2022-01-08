#pragma once

#include <gtk/gtk.h>

#include "flashd_app.h"

#define FLASHD_APP_WINDOW_TYPE (flashd_app_window_get_type())
G_DECLARE_FINAL_TYPE(FlashdAppWindow, flashd_app_window, FLASHD, APP_WINDOW,
		GtkApplicationWindow);

FlashdAppWindow* flashd_app_window_new(FlashdApp* app);

