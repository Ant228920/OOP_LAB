
#include <iostream>
#include "Company.h"
#ifndef OOPLAB1_EMPLOYEE_H
#define OOPLAB1_EMPLOYEE_H

using namespace std;
class Employee: public Company {
private:
    string firstname;
    string lastname;
public:
    Employee();
    Employee(string comname, int comage, int comemp, string newfirst, string newlast);
    friend ostream & operator << (ostream &out, const Employee &n);
    ~Employee(){};
};


#endif //OOPLAB1_EMPLOYEE_H
