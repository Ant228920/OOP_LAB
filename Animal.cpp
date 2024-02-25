#include <iostream>
#include "Animal.h"

 Animal::Animal()
        : vud{"Unknown"},age{0},weight{0} {}
Animal::Animal(std::string new_vud)
        : vud{new_vud},age{0},weight{0} {}
Animal::Animal(std::string new_vud, int new_age)
        : Animal(new_vud,new_age,0) {}
Animal::Animal(std::string new_vud, int new_age, float new_weight)
        : vud{new_vud},age{new_age},weight{new_weight} {}
void Animal::PrintAnimal(){
    cout<<"Type: "<<vud<<" Age:"<<age<<" Weight:"<< weight<<endl;
}
