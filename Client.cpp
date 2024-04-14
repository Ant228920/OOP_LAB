
#include "Client.h"

Client::Client()
        : firstname("None"),lastname("None"){}
Client::Client(string newfirst, string newlast)
        :firstname{newfirst},lastname{newlast}{}
ostream &operator<<(ostream &os, const Client &obj){
    os<<"First name: "<<obj.firstname<<" Lastname: "<<obj.lastname<<endl;
    return os;
}
string Client::getNameOfClient() {
    return firstname;
}
string Client::getSurnameOfClient() {
    return lastname;
}