#pragma once
//#include<iostream>
#include<string>
#include"Person.h"
class Client :public Person {
private:
    double balance;

public:
    Client() : Person() {
        balance = 0;
    }

    Client(int id, string name, string password, double balance) : Person(id, name, password) {
        setBalance(balance);
    }

    void setBalance(double balance) {
        if (Validation::validateBalance(balance))
            this->balance = balance;
        else cout << "Balance must be at least 1500." << endl;
    }

    double getBalance() const {
        return balance;
    }

    double deposit(double amount) {
        if (amount > 0)
            this->balance += amount;
    }

    double withdraw(double amount)
    {
        if (amount <= balance && amount > 0) {
            balance -= amount;
        }
        else
        {
            cout << "Amount exceeded." << endl;
        }
        return balance;
    }

    double transferTo(double amount, Client& recipient) {
        if (amount <= balance)
        {
            balance -= amount;
            recipient.deposit(amount);
        }
        else
        {
            cout << "Amount exceeded." << endl;
        }
        return balance;
    }
    void CheckBalance() const {
        cout << "Balance = " << balance << endl;
    }
    void DisplayFunction() {
        Person::DisplayFunction();
        cout << "Balance = " << balance << endl;
    }
};

