#include <gtk/gtk.h>

// Estructura per no anar perduts amb les dades
typedef struct {
    GtkWidget *label;
    int count;
} AppData;

// La funció que s'executa quan prems el botó
static void on_button_clicked(GtkWidget *button, gpointer user_data) {
    AppData *data = (AppData *)user_data;
    data->count++;

    // Cambiem el text amb un format que tingui "vibes"
    char *str = g_strdup_printf("Has clicat %d vegades! 🔥", data->count);
    gtk_label_set_text(GTK_LABEL(data->label), str);
    g_free(str);

    // Afegim una classe CSS random per fer-ho visual
    if (data->count % 2 == 0) {
        gtk_widget_add_css_class(button, "suggested-action");
    } else {
        gtk_widget_remove_css_class(button, "suggested-action");
        gtk_widget_add_css_class(button, "destructive-action");
    }
}

static void activate(GtkApplication *app, gpointer user_data) {
    // Creem la finestra principal
    GtkWidget *window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "GTK 4 is lit 🚀");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);

    // Un contenidor vertical (Box) amb padding perquè respiri
    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 15);
    gtk_widget_set_margin_top(box, 20);
    gtk_widget_set_margin_bottom(box, 20);
    gtk_window_set_child(GTK_WINDOW(window), box);

    // El label on passaran les coses
    AppData *data = g_malloc(sizeof(AppData));
    data->count = 0;
    data->label = gtk_label_new("Encara no has clicat... 🧊");
    gtk_box_append(GTK_BOX(box), data->label);

    // El botó protagonista
    GtkWidget *button = gtk_button_new_with_label("Clica'm!");
    gtk_box_append(GTK_BOX(box), button);

    // Connectem el clic amb la nostra funció
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), data);

    gtk_window_present(GTK_WINDOW(window));
}

int main(int argc, char **argv) {
    GtkApplication *app = gtk_application_new("io.com.meva.app", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    
    int status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);
    return status;
}