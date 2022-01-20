#include <gtk/gtk.h>

#include "ndex_app.h"
#include "ndex_app_win.h"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// Private

struct _NdexApp {
	GtkApplication parent;
};

G_DEFINE_TYPE(NdexApp, ndex_app, GTK_TYPE_APPLICATION);

static void ndex_app_init(NdexApp* app)
{
	// Nothing yet..
}

static void ndex_app_activate(GApplication* app)
{
	NdexAppWindow* win = ndex_app_window_new(NDEX_APP(app));
	gtk_window_present(GTK_WINDOW(win));
}

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// Class

static void ndex_app_class_init(NdexAppClass* class)
{
	G_APPLICATION_CLASS(class)->activate = ndex_app_activate;
}

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// Public

NdexApp* ndex_app_new(void)
{
	return g_object_new(NDEX_APP_TYPE,
			"application-id", "org.chrinkus.ndexapp",
			"flags", 0,
			NULL);
}

