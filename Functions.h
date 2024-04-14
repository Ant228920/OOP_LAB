#include <iostream>
#include "Owner.h"
#include "Animal.h"
#include "Client.h"
#include "Order.h"

using namespace std;

#ifndef OOPLAB1_FUNCTIONS_H
#define OOPLAB1_FUNCTIONS_H


void SignIn(Owner);
int ExistCheck(Owner);
bool LogIn(Owner);
void AddAnimal(Animal);
void ChangeInfo(Animal);
void AccDelete(Owner);
void ReadAnimal();
bool IsIn(string namecl, string surnamecl);
void MakeOrder(Client client);
void AddClient(Client client);



#endif //OOPLAB1_FUNCTIONS_H
