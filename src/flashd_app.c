#include <gtk/gtk.h>

#include "flashd_app.h"
#include "flashd_app_win.h"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// Private

struct _FlashdApp {
	GtkApplication parent;
};

G_DEFINE_TYPE(FlashdApp, flashd_app, GTK_TYPE_APPLICATION);

static void flashd_app_init(FlashdApp* app)
{
	// Nothing yet..
}

static void flashd_app_activate(GApplication* app)
{
	FlashdAppWindow* win = flashd_app_window_new(FLASHD_APP(app));
	gtk_window_present(GTK_WINDOW(win));
}

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// Class

static void flashd_app_class_init(FlashdAppClass* class)
{
	G_APPLICATION_CLASS(class)->activate = flashd_app_activate;
}

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
// Public

FlashdApp* flashd_app_new(void)
{
	return g_object_new(FLASHD_APP_TYPE,
			"application-id", "org.chrinkus.flashdapp",
			"flags", 0,
			NULL);
}

