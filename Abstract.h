#include <iostream>

#ifndef OOPLAB1_ABSTRACT_H
#define OOPLAB1_ABSTRACT_H

using namespace std;
class Abstract {
    friend ostream &operator<<(ostream &os, const Abstract &obj);
public:
    virtual void Print(ostream &os) const = 0;
    virtual ~Abstract(){};
};


#endif //OOPLAB1_ABSTRACT_H
