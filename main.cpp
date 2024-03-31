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

        cout << "Welcome! Please press 1 if you are an Admin and 2 if you are a User:" << endl;
        int initial;
        cin >> initial;

        if (initial == 1) {
                cout << "Please sign up or log in:" << endl;
                cout << "1 - sign in" << endl;
                cout << "2 - log in" << endl;
                bool T = ExistCheck(ok);
                try {
                    cin >> choice;
                    if (choice != 1 && choice != 2)
                        throw 0;
                    switch (choice) {
                        case 1:
                            if (T) {
                                cout << "You already have some info" << endl;
                                LogIn(ok);
                            } else {
                                SignIn(ok);
                            }
                            break;
                        case 2:
                            if (!T) {
                                cout << "Sorry you don't have an account, please create one" << endl;
                                SignIn(ok);
                            } else {
                                LogIn(ok);
                            }
                    }
                } catch (int &ex) {
                    cout << "Invalid choice. Please try again." << endl;
                }

                cout << "Please choose an action:" << endl;
                cout << "1 - do some stuff" << endl;
                cout << "2 - do some other stuff" << endl;

                try {
                    cin >> func;

                    if (func != 1 && func != 2)
                        throw 0;

                    switch (func) {
                        case 1:
                            cout << "Did some stuff" << endl;
                            break;
                        case 2:
                            cout << "Did some other stuff" << endl;
                            break;
                    }
                } catch (int &ex) {
                    cout << "Invalid choice. Please try again." << endl;
                }

            }
            if (initial == 2) {
                cout << "good";
            }
        return 0;
}
