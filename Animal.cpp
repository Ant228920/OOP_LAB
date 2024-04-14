#include <iostream>
#include "Animal.h"

Animal::Animal()
        : Animal{"None",0,0,0.0}{}
Animal::Animal(string newvud, int newage, float newweight, float newprice)
        :vud{newvud},age{newage},weight{newweight}, price{newprice}{}
ostream &operator<<(ostream &os, const Animal &obj){
    os<<obj.vud<<endl<<obj.age<<endl<<obj.weight<<endl<<obj.price;
    return os;
}
float Animal::Getprice(){
    return price;
}
