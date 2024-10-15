#pragma once
#include<iostream>
#include"Validation.h"
class Person
{
private:
    int id;
    string name;
    string password;

public:
    Person()
    {
        int id = 0;
        string name = "";
        string password = "";
    }

    Person(int id, string name, string password)
    {
        setId(id);
        setName(name);
        setPassword(password);
    }

    void setId(int id) {
        this->id = id;
    }

    void setName(string name) {
        if (Validation::validatename(name))
            this->name = name;
        else cout << "The name is invalid. It must be between 5 and 20 characters long." << endl;
    }

    void setPassword(string password) {
        if (Validation::validatepassword(password))
            this->password = password;
        else cout << "The password is invalid. It must be between 8 and 20 characters long." << endl;
    }

    int getId() const {
        return id;
    }

    string getName() {
        return name;
    }

    string getPassword() {
        return password;
    }

    void DisplayFunction() const {
        cout << "ID = " << id << endl;
        cout << "Name = " << name << endl;
        cout << "Password = " << password << endl;
    }
};

