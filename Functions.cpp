#include <iostream>
#include "Functions.h"
#include "Company.h"
#include "Owner.h"
#include <memory>
#include <fstream>
using namespace std;

void SignIn(Owner){
    cout<<"OK, write down the information"<<endl;
    shared_ptr <string> newpass {new string {""}};
    cout<<"Enter your new password: ";
    cin>>*newpass;
    shared_ptr <string> comname {new string {""}};
    cout<<"Enter the name of the company: ";
    cin>>*comname;
    shared_ptr <int> comage {new int {0}};
    cout<<"Enter the age of a company: ";
    cin>>*comage;
    shared_ptr <int> comemp {new int{0}};
    cout<<"Enter the amount of employers: ";
    cin>>*comemp;
    shared_ptr <string> newname {new string{""}};
    cout<<"Enter name: ";
    cin>>*newname;
    shared_ptr <int> newage {new int {0}};
    cout<<"Enter your age: ";
    cin>>*newage;
    shared_ptr <string> newsex {new string {""}};
    cout<<"Enter your sex: ";
    cin>>*newsex;
    Owner ow(*newpass,*comname,*comage,*comemp,*newname,*newage,*newsex);
    ofstream foutCA (R"(D:\oop labs\ooplab1\files\Changed.txt)",
                     ios_base::app);
    foutCA<<ow;
    foutCA.close();

}
int ExistCheck(Owner){
    ifstream fin(R"(D:\oop labs\ooplab1\files\Changed.txt)",
                  ios_base::app);

    bool T=false;
    if (fin.is_open()) {
        string line;
        while (std::getline(fin, line)) {
            T =true;
        }
        fin.close();
    } else {
        std::cerr << "Помилка відкриття файлу.\n";
    }
    return T;
}
void LogIn(Owner){
    shared_ptr <string> parol{new string {""}};
    cout<<"Enter the password ";
    cin>>*parol;
    ifstream fin(R"(D:\oop labs\ooplab1\files\Changed.txt)",
            ios_base::app);

    if(fin.is_open()){
        string line;
        while (std::getline(fin, line)) {
            // Перевірка, чи знайдено значення
            if (line.find(*parol) != std::string::npos) {
                cout<<"Welcome!"<<endl;
                fin.close();
            }
            else{
                cout<<"Wrong password! Please try later"<<endl;
                fin.close();
            }
        }
    }
    fin.close();
}