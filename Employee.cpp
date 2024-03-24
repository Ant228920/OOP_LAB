#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee()
        : firstname("None"),lastname("None"){}
Employee::Employee(string newfirst, string newlast)
        :firstname{newfirst},lastname{newlast}{}
Employee::Employee(Employee &&other)
        : firstname(std::move(other.firstname)), lastname(std::move(other.lastname)){}
ostream &operator<<(ostream &os, const Employee &obj){
    os<<"First name: "<<obj.firstname<<" Lastname: "<<obj.lastname<<" Working in "<<static_cast<const Company&>(obj);
    return os;
}