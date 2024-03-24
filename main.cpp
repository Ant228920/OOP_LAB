#include <iostream>
#include "Animal.h"
#include "Owner.h"
#include "Company.h"
#include "Employee.h"
#include "Features.h"
#include "Interface.h"
#include "Abstract.h"
#include <memory>


int main() {
    int choice;

    do {
        cout << "Welcome! Please press 1 if you are an Admin and 2 if you are a User:" << endl;
        int initial;
        cin >> initial;

        if (initial == 1) {
            cout << "Please choose the action:" << endl;
            cout << "1 - do some stuff" << endl;
            cout << "2 - do some other stuff" << endl;

            try {
                cin >> choice;

                if (choice != 1 && choice != 2)
                    throw 0;

                switch(choice) {
                    case 1:
                        cout << "Did some stuff" << endl;
                        break;
                    case 2:
                        cout << "Did some other stuff" << endl;
                        break;
                }
            } catch (int &ex) {
                cout << "Invalid choice. Please try again." << endl;
                continue;
            }
        } else if (initial == 2) {
            cout << "You are a user." << endl;
            break;
        } else {
            cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 1 && choice != 2);

    return 0;
}
