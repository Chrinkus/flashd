#pragma once

#include <gtk/gtk.h>

#define NDEX_APP_TYPE (ndex_app_get_type())
G_DECLARE_FINAL_TYPE(NdexApp, ndex_app, NDEX, APP, GtkApplication);

NdexApp* ndex_app_new(void);

