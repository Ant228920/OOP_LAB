#include <iostream>


#ifndef OOPLAB1_FEATURES_H
#define OOPLAB1_FEATURES_H
using namespace std;

class Features {
private:
    string sound;
    string behaviour;
public:
    Features();
    Features(string newsound);
    Features(string newsound, string newbehaviour);
    friend ostream &operator <<(ostream &os,const Features &obj);
    ~Features();
};


#endif //OOPLAB1_FEATURES_H
