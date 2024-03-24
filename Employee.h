
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
    virtual void Info() override{
        cout<<" Best worker: "<<firstname<<" "<<lastname;
    }
    virtual void Age(int age){
        cout<<" The oldest member in a company: "<< age;
    }
    Employee();
    Employee(string newfirst, string newlast);
    Employee(Employee &&other);
    friend ostream & operator << (ostream &os, const Employee &obj);
    virtual ~Employee(){};
};


#endif //OOPLAB1_EMPLOYEE_H
