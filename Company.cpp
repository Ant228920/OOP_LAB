#include "Company.h"
#include <iostream>
Company::Company(std::string newname, int workyears, std::string newrate)
        : name{newname}, workyears{workyears}, rate{newrate}
{}
void Company::PrintCompany() {
    cout<<"Name of the company: "<<name<<" Years of work: "<<workyears<<" Rate: "<<rate;
}
