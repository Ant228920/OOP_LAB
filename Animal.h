
#ifndef OOPLAB1_ANIMAL_H
#define OOPLAB1_ANIMAL_H
#include <iostream>
#include "Features.h"


using namespace std;

class Animal{
private:
    string vud;
    int age;
    float weight;
    Features features;
public:
    void PrintAnimal();
    Animal();
    Animal(string newvud);
    Animal(string newvud, int newage);
    Animal(string newvud, int newage, float newweight, Features thefeatures);
    ~Animal(){
        cout<<endl;
        cout<<"Destructor is here";
    }
    friend ostream &operator<<(ostream &os, const Animal &obj);
};


#endif //OOPLAB1_ANIMAL_H
