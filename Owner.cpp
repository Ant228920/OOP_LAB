#include <iostream>
#include "Owner.h"
using namespace std;
Owner::Owner()
        : Company(),name("None"),age(0),sex("Unknown"){}
Owner::Owner(string newpass,string comname, int comage, int comemp, string newname, int newage, string newsex)
        : pass{newpass},Company(comname,comage,comemp), name{newname},age{newage},sex(newsex) {}
ostream &operator<<(ostream &os, const Owner &obj){
    os<<"Your password: "<<obj.pass<<endl<<"Owner name: "<<obj.name<<endl<<"Age: "<<obj.age<<endl<<"Sex: "<<obj.sex<<endl<<static_cast<const Company&>(obj);
    return os;
}
