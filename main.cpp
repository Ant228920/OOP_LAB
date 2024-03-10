#include <iostream>
#include "Animal.h"
#include "Owner.h"
#include "Company.h"
#include "Employee.h"
#include "Features.h"


int main() {
    Features cat("Meow","Good");
    Animal one("Cat",5,23,cat);
    cout<<one<<endl;
    Owner du("Good",25,100,"Name",0,"Male");
    Owner tes=du;
    cout<<tes<<endl;
    cout<<du<<endl;
    Employee tre("Comp",10,150,"Anatloliy","Molod");
    Employee dust=move(tre);
    cout<<dust<<endl;
    cout<<tre;

    return 0;
}
