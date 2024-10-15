#pragma once
#include "Person.h"
//#include "Validation.h"
#include <string>
class Employee : public Person {

protected:
    double salary;

public:

    Employee() :Person() {

        salary = 0;
    }
    Employee(int id, string name, string password, double salary) : Person(id, name, password) {
        setSalary(salary);
    }

    void setSalary(double salary) {
        if (Validation::validateSalary(salary))
            this->salary = salary;
        else cout << "invalid salary" << endl;

    }


    double getSalary() const {
        return salary;
    }
    void display() {
        Person::DisplayFunction();
        cout << "salary = " << salary << endl;
    }

};

