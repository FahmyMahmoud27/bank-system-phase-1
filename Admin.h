#pragma once
#include "Employee.h"
#include <string>

class Admin : public Employee {
public:
	Admin() : Employee() {

	}
	Admin(int id, string name, string password, double salary) :Employee(id, name, password, salary) {

	}

};