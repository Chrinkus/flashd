#pragma once

#include <gtk/gtk.h>

#define FLASHD_APP_TYPE (flashd_app_get_type())
G_DECLARE_FINAL_TYPE(FlashdApp, flashd_app, FLASHD, APP, GtkApplication);

FlashdApp* flashd_app_new(void);

