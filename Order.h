#include <iostream>

#ifndef OOPLAB1_ORDER_H
#define OOPLAB1_ORDER_H

using namespace std;
class Order {
private:
    string address;
    double price;
    string status;
public:
    Order();
    Order(string newaddress, double newprice, string newstatus);
    friend ostream &operator <<(ostream &os,const Order &obj);
    ~Order(){}
    string getAddress();
    double getPrice();
    string getStatus();
};


#endif //OOPLAB1_ORDER_H
