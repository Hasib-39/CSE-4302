// main.cpp

#include <iostream>
#include "employee.h"

using namespace std;

int main() {
    // Create an employee object
    Employee employee1;

    // Set information using setInfo()
    employee1.setInfo("Hasib Altaf", 16, 12, 2001, 50000.0);

    // Display information using getInfo()
    employee1.getInfo();

    return 0;
}
