#include "mainwin.h"
#include <exception>
#include <stdexcept>
#include <iostream>
#include <sstream>

void Mainwin::on_salary_click() {
	int server = select_server();
    if (server < 0) return;

    std::string a;
    double s;

	Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title("Set Salary");

    // Salary
    Gtk::HBox b_salary;

    Gtk::Label l_salary{"New Salary:"};
    l_salary.set_width_chars(15);
    b_salary.pack_start(l_salary, Gtk::PACK_SHRINK);

    Gtk::Entry e_salary;
    e_salary.set_max_length(50);
    b_salary.pack_start(e_salary, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_salary, Gtk::PACK_SHRINK);

    // Show dialog
    dialog->add_button("Cancel", 0);
    dialog->add_button("OK", 1);
    dialog->show_all();
    int result = dialog->run();

    dialog->close(); 

    a = e_salary.get_text();

    std::stringstream aa(a);
    aa >> s;

    _servers[server].set_salary(s);                
}