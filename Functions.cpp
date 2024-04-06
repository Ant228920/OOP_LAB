#include <iostream>
#include "Functions.h"
#include "Company.h"
#include "Owner.h"
#include "Animal.h"
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
    shared_ptr <string> reppass {new string {""}};
    cout<<"Now please repeat your password: ";
    do{
        cin>>*reppass;
    }while(*reppass!=*newpass);
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
void AccDelete(Owner) {
    ofstream fin(R"(D:\oop labs\ooplab1\files\Changed.txt)",
                       ios_base::trunc);

    if (fin.is_open()) {
        fin << "";

        fin.close();
        cout << "Your account is successfully deleted"<<endl;
    }
}
bool LogIn(Owner){
    bool P = false;
    shared_ptr <string> parol{new string {""}};
    cout<<"Enter the password ";
    cin>>*parol;
    ifstream fin(R"(D:\oop labs\ooplab1\files\Changed.txt)",
            ios_base::app);

    if(fin.is_open()){
        string line;
        while (std::getline(fin, line)) {
            if (line.find(*parol) != std::string::npos) {
                cout<<"Welcome!"<<endl;
                P = true;
                fin.close();
            }
            else{
                cout<<"Wrong password! Please try later"<<endl;
                P = false;
                fin.close();
            }
        }
    }
    fin.close();
    return P;
}
void AddAnimal(Animal){
    int add;
    cout<<"OK write down how many animals do you want to add"<<endl;
    cin>>add;
    for(int i=0; i<add; i++) {
        cout<<"Add the animal number "<<i+1<<endl;
        shared_ptr<string> newname{new string{""}};
        cout<<"Enter the name"<<endl;
        cin >> *newname;
        shared_ptr<int> newage{new int{0}};
        cout << "Enter the age ";
        cin >> *newage;
        shared_ptr<float> newweight{new float{0}};
        cout << "Enter the weight: ";
        cin >> *newweight;
        Animal an(*newname, *newage, *newweight);
        ofstream foutCA(R"(D:\oop labs\ooplab1\files\Animals.txt)",
                        ios_base::app);
        foutCA << an;
        foutCA.close();
    }
}
void ChangeInfo(Animal) {
    std::ofstream fin(R"(D:\oop labs\ooplab1\files\Animals.txt)",
                       ios_base::trunc);

    if (fin.is_open()) {
        fin << "";

        fin.close();
    }
    else{
        cout<<"Error";
    }

        int add;
        cout << "OK write down how many animals do you want to add" << endl;
        cin >> add;
        for (int i = 0; i < add; i++) {
            cout << "Add the animal number " << i+1 << endl;
            shared_ptr<string> newname{new string{""}};
            cout << "Enter the name" << endl;
            cin >> *newname;
            shared_ptr<int> newage{new int{0}};
            cout << "Enter the age ";
            cin >> *newage;
            shared_ptr<float> newweight{new float{0}};
            cout << "Enter the weight: ";
            cin >> *newweight;
            Animal an(*newname, *newage, *newweight);
            ofstream foutCA(R"(D:\oop labs\ooplab1\files\Animals.txt)",
                            ios_base::app);
            foutCA << an;
            foutCA.close();
        }
    }
void ReadAnimal(){
    int i = 1;
    ifstream finE(R"(D:\oop labs\ooplab1\files\Animals.txt)");
    if (!finE.is_open()) {
        cerr << "Error opening file: " << endl;
    }
    else {
        shared_ptr<string> name{new string{""}};
        shared_ptr<int> age{new int{0}};
        shared_ptr<float> weight{new float{0}};
        while (finE >> *name >> *age >> *weight) {
            cout<<"Animal number "<<i<<endl;
            cout<<"name: ";
            cout<<*name<<endl;
            cout<<"age: ";
            cout<<*age<<endl;
            cout<<"weight: ";
            cout<<*weight<<endl;
            i++;
        }
    }
    finE.close();
}