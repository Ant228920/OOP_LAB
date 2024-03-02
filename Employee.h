//
// Created by Користувач on 03.03.2024.
//
#include <iostream>
#ifndef OOPLAB1_EMPLOYEE_H
#define OOPLAB1_EMPLOYEE_H

using namespace std;
class Employee {
private:
    string firstname;
    string lastname;
public:
    friend ostream & operator << (ostream &out, const Employee &n);
    friend istream & operator << (istream &in, Employee &n);
    ~Employee(){
        cout<<endl;
        cout<<"Destructor is here";
    }
};


#endif //OOPLAB1_EMPLOYEE_H
