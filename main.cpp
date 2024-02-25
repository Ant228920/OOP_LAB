#include <iostream>
#include "Animal.h"
#include "Owner.h"
#include "Company.h"

int main() {
    Animal first("cat",2);
    first.PrintAnimal();
    Animal secondanimal{Animal("cat",2,23.1)};
    secondanimal.PrintAnimal();
    std::cout<<endl;
    Owner owner;
    owner.PrintOwner();
    Owner owner1("Andrei", 20);
    owner1.PrintOwner();
    std::cout<<endl;
    Company company1("AnimalCare",10);
    company1.PrintCompany();
    return 0;
}
