#pragma once

#include <gtk/gtk.h>

#include "ndex_app.h"

#define NDEX_APP_WINDOW_TYPE (ndex_app_window_get_type())
G_DECLARE_FINAL_TYPE(NdexAppWindow, ndex_app_window, NDEX, APP_WINDOW,
		GtkApplicationWindow);

NdexAppWindow* ndex_app_window_new(NdexApp* app);

