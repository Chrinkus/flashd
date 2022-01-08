#include <gtk/gtk.h>

#include "flashd_app.h"

int main(int argc, char* argv[])
{
	return g_application_run(G_APPLICATION(flashd_app_new()), argc, argv);
}

