
#ifndef OOPLAB1_COMPANY_H
#define OOPLAB1_COMPANY_H
#include <iostream>
using namespace std;

class Company{
private:
    string name;
    int workyears;
    string rate;
public:
    void PrintCompany();
    Company(string newname="None", int workyears=0, string newrate="Unknown");
    ~Company(){
        cout<<endl;
        cout<<"Destructor is here";
    }
};

#endif //OOPLAB1_COMPANY_H
