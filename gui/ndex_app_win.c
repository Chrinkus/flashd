#include <gtk/gtk.h>

#include "ndex_app.h"
#include "ndex_app_win.h"

struct _NdexAppWindow {
	GtkApplicationWindow parent;
};

G_DEFINE_TYPE(NdexAppWindow, ndex_app_window, GTK_TYPE_APPLICATION_WINDOW);

static void ndex_app_window_init(NdexAppWindow* win)
{
	gtk_widget_init_template(GTK_WIDGET(win));
}

static void ndex_app_window_class_init(NdexAppWindowClass* class)
{
	gtk_widget_class_set_template_from_resource(GTK_WIDGET_CLASS(class),
			"/org/chrinkus/ndexapp/window.ui");
}

NdexAppWindow* ndex_app_window_new(NdexApp* app)
{
	return g_object_new(NDEX_APP_WINDOW_TYPE, "application", app, NULL);
}

