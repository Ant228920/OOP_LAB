 #include <iostream>
#include "Abstract.h"

ostream &operator<<(ostream &os, const Abstract &obj){
    obj.Print(os);
    return os;
}
