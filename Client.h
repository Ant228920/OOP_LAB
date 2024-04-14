#include <iostream>

#ifndef OOPLAB1_CLIENT_H
#define OOPLAB1_CLIENT_H


using namespace std;
class Client {
private:
    string firstname;
    string lastname;
public:
    Client();
    Client(string newfirst, string newlast);
    friend ostream & operator << (ostream &os, const Client &obj);
    ~Client(){};
    string getNameOfClient();
    string getSurnameOfClient();
};


#endif //OOPLAB1_CLIENT_H
