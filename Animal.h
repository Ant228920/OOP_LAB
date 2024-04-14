#ifndef OOPLAB1_ANIMAL_H
#define OOPLAB1_ANIMAL_H
#include <iostream>



using namespace std;

class Animal{
private:
    string vud;
    int age;
    float weight;
    float price;
public:
//    virtual void final() final{
//        "Cant inherite this text";
//    }
    Animal();
    Animal(string newvud);
    Animal(string newvud, int newage);
    Animal(string newvud, int newage, float newweight, float newprice);
    friend ostream &operator<<(ostream &os, const Animal &obj);
    virtual~Animal(){};
    float Getprice();
};


#endif //OOPLAB1_ANIMAL_H
