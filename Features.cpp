#include "Features.h"
#include <iostream>

Features::Features()
        : Features{"None","Unknown"}{}
Features::Features(string newsound, string newbehaviour)
        : sound{newsound},behaviour{newbehaviour} {}
ostream &operator<<(ostream &os, const Features &obj){
    os<<" Sound: "<<obj.sound<<" Behaviour: "<<obj.behaviour;
    return os;
}