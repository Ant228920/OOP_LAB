#include <iostream>

#include "Order.h"
using namespace std;

Order::Order()
        : Order("",0,""){}

Order::Order(string newaddres, double newprice, string newstatus)
        : address(newaddres), price(newprice), status(newstatus){}

ostream &operator<<(ostream &os, const Order &obj){
    os<<" Address: "<<obj.address<<" Price: "<<obj.price<<" Status: "<<obj.status;
    return os;
}

string Order::getAddress() {
    return address;
}
double Order::getPrice(){
    return price;
}
string Order::getStatus(){
    return status;
}