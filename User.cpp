#include "User.h"
#include <iostream>
using namespace std;

void User::accessLevel() {
    cout << "General Access" << endl;
}

void Employee::accessLevel() {
    cout << "Employee Access" << endl;
}

void InventoryManager::accessLevel() {
    cout << "Full Inventory Management Access" << endl;
}
