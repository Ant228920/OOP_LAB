#include <iostream>
#include "Owner.h"
using namespace std;
Owner::Owner()
        : Company(),name("None"),age(0),sex("Unknown"){}
Owner::Owner(string comname, int comage, int comemp, string newname, int newage, string newsex)
        : Company(comname,comage,comemp), name{newname},age{newage},sex(newsex) {}
Owner::Owner(const Owner &other)
    : Company(other), name(other.name), age(other.age), sex(other.sex){}
Owner Owner::operator=(const Owner &rhs) {
    if(this == &rhs)
        return *this;
    else{
        Company::operator=(rhs);
        name = rhs.name;
        age = rhs.age;
        sex = rhs.sex;
        return  *this;
    }
}
ostream &operator<<(ostream &os, const Owner &obj){
    os<<"Owner name: "<<obj.name<<" Age: "<<obj.age<<" Sex: "<<obj.sex<<" The owner of a company "<<static_cast<const Company&>(obj);
    return os;
}
