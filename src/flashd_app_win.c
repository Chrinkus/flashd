#include <gtk/gtk.h>

#include "flashd_app.h"
#include "flashd_app_win.h"

struct _FlashdAppWindow {
	GtkApplicationWindow parent;
};

G_DEFINE_TYPE(FlashdAppWindow, flashd_app_window, GTK_TYPE_APPLICATION_WINDOW);

static void flashd_app_window_init(FlashdAppWindow* win)
{
	gtk_widget_init_template(GTK_WIDGET(win));
}

static void flashd_app_window_class_init(FlashdAppWindowClass* class)
{
	gtk_widget_class_set_template_from_resource(GTK_WIDGET_CLASS(class),
			"/org/chrinkus/flashdapp/window.ui");
}

FlashdAppWindow* flashd_app_window_new(FlashdApp* app)
{
	return g_object_new(FLASHD_APP_WINDOW_TYPE, "application", app, NULL);
}

