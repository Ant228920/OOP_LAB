
#ifndef OOPLAB1_ANIMAL_H
#define OOPLAB1_ANIMAL_H
#include <iostream>

using namespace std;

class Animal{
private:
    string vud;
    int age;
    float weight;
public:
    void PrintAnimal();
    Animal();
    Animal(string new_vud);
    Animal(string new_vud, int new_age);
    Animal(string new_vud, int new_age, float new_weight);
    ~Animal(){
        cout<<endl;
        cout<<"Destructor is here";
    }
};


#endif //OOPLAB1_ANIMAL_H
