#include <iostream>
#include "Animal.h"
#include "Owner.h"
#include "Company.h"
#include "Employee.h"
#include "Features.h"


int main() {
    Features cat("Meow","Good");
    Animal one("Cat",5,23,cat);
    cout<<one;
    return 0;
}
