#include <iostream>
#include "Animal.h"
#include "Owner.h"
#include "Company.h"
#include "Employee.h"
#include "Features.h"
#include "Interface.h"
#include "Abstract.h"
void highSalary(Company &sal, float mon){
    sal.highSal(mon);
};
void lowSalary(Company &sal, float mon){
    sal.lowSal(mon);
};
void printOne(Interface &obj){
    cout<<obj;
};
void printTwo(Abstract &obj){
    cout<<obj;
};
int main() {
    Company *a = new Owner;
    a->OwnersComp();
    Employee c("Anthony","White");
    Company d("Nice",20,120);
    cout<<endl;
    d.Info();
    cout<<endl;
    c.Info();
    Company *comp = new Company();
    cout<<endl;
    comp->Age(1952);
    Company *emp = new Employee();
    cout<<endl;
    emp->Age(52);
    Company acc;
    highSalary(acc,200);
    cout<<endl;
    lowSalary(acc, 30);
    cout<<endl;
//    Animal an;
//    Animal *anotherAnimal = new Animal;
    Animal *cat = new Features();
    cout<<endl;
    cat->Sound();
    cout<<endl;
    cat->Info();
    cout<<endl;
    Interface *rand = new Interface;
    cout<<*rand;

    printOne(*rand);
    printTwo(*rand);



    return 0;
}
