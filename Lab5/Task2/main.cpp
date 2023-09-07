// main.cpp

#include <iostream>
#include "student.h"

int main() {
    // Create a student object
    Student student1;

    // Set information using setInfo()
    student1.setInfo("Hasib Altaf", 16, 12, 2001, 210041102, 3.81);

    // Get and display information using getInfo()
    student1.getInfo();

    return 0;
}
