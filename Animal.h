
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
    Animal(string vud);
    Animal(string vud, int age);
    Animal(string vud, int age, float weight);
    ~Animal(){
        cout<<endl;
        cout<<"Destructor is here";
    }
};


#endif //OOPLAB1_ANIMAL_H
