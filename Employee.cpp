#include "Employee.h"
#include <iostream>
using namespace std;

ostream & operator << (ostream &out, const Employee &n){
    out <<"First name: "<< n.firstname;
    out<<" Last name: "<<n.lastname;
    return out;
}
istream & operator << (istream &in, Employee &n){
    cout << "First ";
    in>>n.firstname;
    cout<<" Second ";
    in >> n.lastname;
    return in;
}