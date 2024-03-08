
#ifndef OOPLAB1_COMPANY_H
#define OOPLAB1_COMPANY_H
#include <iostream>
using namespace std;

class Company{
private:
    int emplonum;
public:
    void PrintCompany();
    Company(int number) : emplonum(number) {};
    ~Company(){
        cout<<endl;
        cout<<"Destructor is here";
    }
};

#endif //OOPLAB1_COMPANY_H
