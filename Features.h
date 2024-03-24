#include <iostream>
#include "Animal.h"

#ifndef OOPLAB1_FEATURES_H
#define OOPLAB1_FEATURES_H
using namespace std;

class Features: public Animal{
private:
    string sound;
    string behaviour;
public:
//    virtual void final()
    Features();
    Features(string newsound);
    Features(string newsound, string newbehaviour);
    friend ostream &operator <<(ostream &os,const Features &obj);
    ~Features(){};
    void Info()override {
        cout<<"I am an animal";
    }
    void Sound()override {
        cout<<"Meow";
    }
};



#endif //OOPLAB1_FEATURES_H
