#include <iostream>
#include "Animal.h"

Animal::Animal()
        : Animal{"None",0,0,Features("None","Unknown")}{}
Animal::Animal(string newvud, int newage, float newweight, Features thefeatures)
        :vud{newvud},age{newage},weight{newweight}, features(thefeatures){}
ostream &operator<<(ostream &os, const Animal &obj){
    os<<"Vud: "<<obj.vud<<" Age: "<<obj.age<<" Weight: "<<obj.weight<<obj.features;
    return os;
}
