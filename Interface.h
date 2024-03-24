#include <iostream>
#include "Abstract.h"
#ifndef OOPLAB1_INTERFACE_H
#define OOPLAB1_INTERFACE_H
using namespace std;

class Interface : public Abstract {
public:
    virtual void Print(ostream &os) const override{
        os<<"HI hello"<<endl;
    }
};


#endif //OOPLAB1_INTERFACE_H
