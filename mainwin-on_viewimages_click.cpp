#include "mainwin.h"
#include <exception>
#include <stdexcept>
#include <iostream>
#include <sstream>

Gtk::Image* image = 0;

void Mainwin::on_viewimages_click() {
	Gtk::FileChooserDialog dialog("Open image",
	                              Gtk::FILE_CHOOSER_ACTION_OPEN);
	dialog.add_button (Gtk::Stock::OPEN,
	                   Gtk::RESPONSE_ACCEPT);
	dialog.add_button (Gtk::Stock::CANCEL,
	                   Gtk::RESPONSE_CANCEL);

	Glib::RefPtr<Gtk::FileFilter> filter =
		Gtk::FileFilter::create();
	filter->add_pixbuf_formats();
	filter->set_name("Images");
	dialog.add_filter (filter);

	const int response = dialog.run();
	dialog.hide();

	switch (response)
	{
		case Gtk::RESPONSE_ACCEPT:
			image->set(dialog.get_filename());
			break;
		default:
			break;
	}
}