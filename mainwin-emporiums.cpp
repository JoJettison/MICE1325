#include "mainwin.h"
#include "emporium.h"
#include <exception>
#include <stdexcept>
#include <regex>
#include <sstream>

// template<Emporium T>
//   void something(T t)
//   {
//
//   }

void Mainwin::on_file_open_click() {


    const int WIDTH = 15;

    Gtk::Dialog dialog;
    dialog.set_title("Load Emporium");
    dialog.set_transient_for(*this);

    // Name
    Gtk::HBox b_file;

    Gtk::Label l_file{"File Name:"};
    l_file.set_width_chars(WIDTH);
    b_file.pack_start(l_file, Gtk::PACK_SHRINK);

    Gtk::Entry e_file;
    e_file.set_max_length(WIDTH*4);
    b_file.pack_start(e_file, Gtk::PACK_SHRINK);
    dialog.get_vbox()->pack_start(b_file, Gtk::PACK_SHRINK);

    dialog.add_button("Cancel", 0);
    dialog.add_button("OK", 1);
    dialog.show_all();

    dialog.run();
    dialog.close();


    try {
        std::ifstream ifs{e_file.get_text(), std::ifstream::in};
        _emp = new Mice::Emporium{ifs};
    } catch (std::exception& e) {
        Gtk::MessageDialog dialog{*this, "Unable to open "+ e_file.get_text()};
        dialog.set_secondary_text(e.what());
        dialog.run();
        dialog.close();
    }
}

void Mainwin::on_file_save_click() {
    const int WIDTH = 15;
    std::regex verifile {"(cpp)+|(h)+"};

    Gtk::Dialog dialog;
    dialog.set_title("Save Emporium");
    dialog.set_transient_for(*this);

    // Name
    Gtk::HBox b_file;

    Gtk::Label l_file{"File Name:"};
    l_file.set_width_chars(WIDTH);
    b_file.pack_start(l_file, Gtk::PACK_SHRINK);

    Gtk::Entry e_file;
    e_file.set_max_length(WIDTH*4);
    b_file.pack_start(e_file, Gtk::PACK_SHRINK);
    dialog.get_vbox()->pack_start(b_file, Gtk::PACK_SHRINK);

    dialog.add_button("Cancel", 0);
    dialog.add_button("OK", 1);
    dialog.show_all();

    dialog.run();

    dialog.close();


    try {
      std::stringstream ovp(e_file.get_text());

      if(regex_search(ovp.str(),verifile)){
        std::ofstream ofs{"emporium.emp", std::ofstream::out};
        _emp->save(ofs);
      }else{
        std::ofstream ofs{e_file.get_text(), std::ofstream::out};
        _emp->save(ofs);
      }

    } catch (std::exception& e) {
        Gtk::MessageDialog dialog{*this, "Unable to save "+e_file.get_text() };
        dialog.set_secondary_text(e.what());
        dialog.run();
        dialog.close();
    }
}

void Mainwin::on_file_new_click(){
  try {
      std::ifstream ifs{"default.emp", std::ifstream::in};
      _emp = new Mice::Emporium{ifs};

      Gtk::MessageDialog dialog{*this, "Created New Emporium"};
      dialog.run();
      dialog.close();

  } catch (std::exception& e) {
      Gtk::MessageDialog dialog{*this, "Unable to open default.emp"};
      dialog.set_secondary_text(e.what());
      dialog.run();
      dialog.close();
  }


}
