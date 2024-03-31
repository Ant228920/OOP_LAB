
#ifndef OOPLAB1_OWNER_H
#define OOPLAB1_OWNER_H
#include <iostream>
#include "Company.h"

using namespace std;

class Owner: public Company{
private:
    string pass;
    string name;
    int age;
    string sex;
public:
    Owner();
    Owner(string newpass, string comname, int comage, int comemp, string newname, int newage, string newsex);
    friend ostream &operator <<(ostream &os,const Owner &obj);
    ~Owner(){};
};



#endif //OOPLAB1_OWNER_H
