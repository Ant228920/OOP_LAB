
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
    void OwnersComp(){
        cout<<"This comapny is owner's";
    }
    virtual void Info(){
        cout<<"Name of company: "<<name<<" Age of company: "<<age<<" Amount of employers: "<<epmloyees;
    }
    virtual void Age(int num){
        cout<<" Was created in: "<<num;
    }
    void highSal(int money){
        cout<<"The highest salary: "<<money;
    }
    void lowSal(int money){
        cout<<"The lowest salary: "<<money;
    }
    Company(string newname);
    Company(string newname, int newage);
    Company(string newname, int newage, int newemplyees);
    friend ostream &operator <<(ostream &os,const Company &obj);
    virtual ~Company(){};
};
#endif //OOPLAB1_COMPANY_H
