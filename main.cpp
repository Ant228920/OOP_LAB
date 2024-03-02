#include <iostream>
#include "Animal.h"
#include "Owner.h"
#include "Company.h"


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
    Owner p1("Alex",20,"male");
    Owner p2=p1;
    cout<<"Orig ";
    p1.PrintOwner();
    cout<<endl<<"Copy ";
    p2.PrintOwner();






    return 0;
}
