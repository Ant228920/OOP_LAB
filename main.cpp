#include <iostream>
#include "Animal.h"
#include "Owner.h"
#include "Company.h"
#include "Employee.h"


int main() {
    Animal first("cat",2,22);
    first.PrintAnimal();
    Animal secondanimal{Animal("cat",2)};
    secondanimal.PrintAnimal();
    cout<<"Amount of Animals is "<<Animal::getamountOfAnimals()<<endl;
    std::cout<<endl;
    Owner owner;
    owner.PrintOwner();
    Owner owner1("Andrei", 20);
    owner1.PrintOwner();
    std::cout<<endl;
    Company obj1(5);
    Company obj2=-obj1;
    obj1.PrintCompany();
    cout<<endl;
    obj2.PrintCompany();
    cout<<endl;
    Company obj4(8);
    Company obj3(22);
    Company obj5 = obj4 + obj3;
    obj5.PrintCompany();
    cout<<endl;
    Owner p3("Bob",22,"male");
    Owner p4=p3;
    cout<<"ORIGINAL: ";
    p3.PrintOwner();
    cout<<"Copied: ";
    p4.PrintOwner();

    Owner p1("Alex",20,"male");
    Owner p2=move(p1);
    cout<<"Orig ";
    p1.PrintOwner();
    cout<<endl<<"Copy ";
    p2.PrintOwner();

    cout<<endl;
    Employee empl1;
    cin<<empl1;
    cout<<empl1;






    return 0;
}
