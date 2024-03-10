#include "Company.h"
#include <iostream>

Company::Company()
        : Company{"None",0,0}{}
Company::Company(string newname, int newage, int newemplyees)
        : name{newname},age{newage},epmloyees(newemplyees) {}
Company::Company(const Company &other){
    name = other.name;
    age = other.age;
    epmloyees = other.epmloyees;
}
Company::Company(Company&& other)
        :name(other.name), age(other.age), epmloyees(other.epmloyees){
    other.name= "";
    other.age=0;
    other.epmloyees= 0;
}
Company Company::operator=(const Company &rhs) {
    if(this==&rhs)
        return *this;
    else{
        name=rhs.name;
        age=rhs.age;
        epmloyees=rhs.epmloyees;
        return *this;
    }
}
ostream &operator<<(ostream &os, const Company &obj){
    os<<" Company: "<<obj.name<<" How old is the company: "<<obj.age<<" Amount of employees: "<<obj.epmloyees;
    return os;
}