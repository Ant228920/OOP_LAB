#include <iostream>
#include "Animal.h"
int Animal::amountOfAnimals = 0;
int Animal::getamountOfAnimals() {
    return amountOfAnimals;
}
Animal::Animal(string vud)
        : vud("unknown"),age(0), weight(0)
{
    this->vud = vud;
    amountOfAnimals++;
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
