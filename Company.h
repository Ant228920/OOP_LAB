
#ifndef OOPLAB1_COMPANY_H
#define OOPLAB1_COMPANY_H
#include <iostream>
using namespace std;

class Company{
private:
    string name;
    int age;
    int epmloyees;
public:
    Company();
    Company(string newname);
    Company(string newname, int newage);
    Company(string newname, int newage, int newemplyees);
    friend ostream &operator <<(ostream &os,const Company &obj);
    ~Company(){};
};

#endif //OOPLAB1_COMPANY_H
