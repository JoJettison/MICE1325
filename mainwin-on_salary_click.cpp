#include "mainwin.h"
#include <exception>
#include <stdexcept>
#include <iostream>
#include <sstream>

void Mainwin::on_salary_click() {
	int server = select_server();
    if (server < 0) return;
}