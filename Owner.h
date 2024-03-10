
#ifndef OOPLAB1_OWNER_H
#define OOPLAB1_OWNER_H
#include <iostream>
#include "Company.h"

using namespace std;

class Owner: public Company{
private:
    string name;
    int age;
    string sex;
public:
    Owner();
    Owner(string comname, int comage, int comemp, string newname, int newage, string newsex);
    Owner(const Owner &other);
    friend ostream &operator <<(ostream &os,const Owner &obj);
    Owner operator=(const Owner &rhs);
    ~Owner(){};
};



#endif //OOPLAB1_OWNER_H
