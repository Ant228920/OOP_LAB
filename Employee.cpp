#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee()
        : Company(),firstname("None"),lastname("None"){}
Employee::Employee(string comname, int comage, int comemp,string newfirst, string newlast)
        :Company(comname,comage,comemp),firstname{newfirst},lastname{newlast}{}
ostream &operator<<(ostream &os, const Employee &obj){
    os<<"First name: "<<obj.firstname<<" Lastname: "<<obj.lastname<<" Working in "<<static_cast<const Company&>(obj);
    return os;
}