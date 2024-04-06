#include <iostream>
#include "Animal.h"
#include "Owner.h"
#include "Company.h"
#include "Employee.h"
#include "Features.h"
#include "Interface.h"
#include "Abstract.h"
#include "Functions.h"
#include <memory>


#include <iostream>

using namespace std;

int main() {
    int choice;
    int func;
    Owner ok("", "", 0, 0, "", 0, "");
    Animal an("",0,0);

        cout << "Welcome! Please press 1 if you are an Admin and 2 if you are a User:" << endl;
        int initial;
        cin >> initial;

        if (initial == 1) {
            cout << "Please sign up or log in:" << endl;
            cout << "1 - sign in" << endl;
            cout << "2 - log in" << endl;
            cout << "3 - delete and create new account" << endl;
            bool T = ExistCheck(ok);
            try {
                cin >> choice;
                if (choice != 1 && choice != 2 && choice != 3)
                    throw 0;
                switch (choice) {
                    case 1:
                        if (T) {
                            cout << "You already have some info" << endl;
                            bool P = LogIn(ok);
                            if (!P) {
                                return 0;
                            }
                        } else {
                            SignIn(ok);
                        }
                        break;
                    case 2:
                        if (!T) {
                            cout << "Sorry you don't have an account, please create one" << endl;
                            SignIn(ok);
                        } else {
                            bool P = LogIn(ok);
                            if (!P) {
                                return 0;
                            }
                        }
                        break;
                    case 3:
                        if (!T) {
                            cout << "You don't have any accounts" << endl;
                            SignIn(ok);
                        } else {
                            AccDelete(ok);
                            SignIn(ok);
                        }
                }
            }
            catch (int &ex) {
                cout << "Invalid choice. Please try again." << endl;

            }


            cout << "Please choose an action:" << endl;
            cout << "1 - Add an animal" << endl;
            cout << "2 - Change info" << endl;
            cout << "3 - Show Animals" << endl;

            try {
                cin >> func;

                if (func != 1 && func != 2 && func !=3 && func !=4)
                    throw 0;

                switch (func) {
                    case 1:
                        AddAnimal(an);
                        break;
                    case 2:
                        ChangeInfo(an);
                        break;
                    case 3:
                        ReadAnimal();
                        break;
                    case 4:
                        return 0;
                }
            } catch (int &ex) {
                cout << "Invalid choice. Please try again." << endl;
            }
        }
            if (initial == 2) {
            }

        return 0;
}
