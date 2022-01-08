#include <gtk/gtk.h>

#include "flashd_app.h"
#include "flashd_app_win.h"

struct _FlashdAppWindow {
	GtkApplicationWindow parent;
};

G_DEFINE_TYPE(FlashdAppWindow, flashd_app_window, GTK_TYPE_APPLICATION_WINDOW);

static void flashd_app_window_init(FlashdAppWindow* win)
{
	// Nothing yet..
}

static void flashd_app_window_class_init(FlashdAppWindowClass* class)
{
	// Nothing yet..
}

FlashdAppWindow* flashd_app_window_new(FlashdApp* app)
{
	return g_object_new(FLASHD_APP_WINDOW_TYPE, "application", app, NULL);
}

