#include <iostream>
#include "Owner.h"

Owner::Owner(std::string newname, int newage, std::string newsex)
: name{newname}, age{newage}, sex{newsex}
{}
Owner::Owner(const Owner &other){
    name = other.name;
    age = other.age;
    sex = other.sex;
}
void Owner::PrintOwner(){
    cout<<"Name: "<<name<<" Age:"<<age<<" Sex:"<< sex<<endl;
}
