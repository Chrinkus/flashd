#include <gtk/gtk.h>

#include "ndex_app.h"

int main(int argc, char* argv[])
{
	return g_application_run(G_APPLICATION(ndex_app_new()), argc, argv);
}

