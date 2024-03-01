#include <iostream>
#include "Animal.h"

Animal::Animal(string vud)
        : vud("unknown"),age(0), weight(0)
{
    this->vud = vud;
};

Animal::Animal(string name, int age) : Animal(name)
{
    this->age = age;
};

Animal::Animal(string name, int age, float weight) : Animal(name, age)
{
    this->weight = weight;
};
void Animal::PrintAnimal(){
    cout<<"Type: "<<vud<<" Age:"<<age<<" Weight:"<< weight<<endl;
}
