#include "Company.h"
#include <iostream>

Company::Company()
        : Company{"None",0,0}{}
Company::Company(string newname, int newage, int newemplyees)
        : name{newname},age{newage},epmloyees(newemplyees) {}
ostream &operator<<(ostream &os, const Company &obj){
    os<<"Company: "<<obj.name<<endl<<"How old is the company: "<<obj.age<<endl<<"Amount of employees: "<<obj.epmloyees<<endl;
    return os;
}