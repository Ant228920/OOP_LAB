
#ifndef OOPLAB1_OWNER_H
#define OOPLAB1_OWNER_H
#include <iostream>

using namespace std;

class Owner{
private:
    string name;
    int age;
    string sex;
public:
    void PrintOwner();
    Owner(std::string newname="None", int newage=0, std::string newsex="unknown");
    ~Owner(){
        cout<<endl;
        cout<<"Destructor is here";
    }
};



#endif //OOPLAB1_OWNER_H
