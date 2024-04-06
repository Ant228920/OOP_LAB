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
//    virtual void final() final{
//        "Cant inherite this text";
//    }
    Animal();
    Animal(string newvud);
    Animal(string newvud, int newage);
    Animal(string newvud, int newage, float newweight);
    friend ostream &operator<<(ostream &os, const Animal &obj);
    virtual~Animal(){};
};


#endif //OOPLAB1_ANIMAL_H
