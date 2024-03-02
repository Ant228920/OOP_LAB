#include "Company.h"
#include <iostream>
Company Company::operator-()const{
    return Company(-emplonum);
}
Company Company::operator+(const Company &other) const {
    return Company(emplonum + other.emplonum);
}
void Company::PrintCompany() {
    cout<<"Number of employees: "<<emplonum;
}
