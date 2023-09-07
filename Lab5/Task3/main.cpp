// main.cpp

#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main() {
    // Create a student object
    Student student1;

    // Set information using setter methods
    student1.setInfo("Hasib Altaf", 16, 12, 2001, 210041102, 3.81);

    // Get and display information using getInfo()
    student1.getInfo();

    // Get the current date (you need to provide this input)
    Date currentDate;
    std::cout << "Enter current date (dd mm yyyy): ";
    std::cin >> currentDate.day >> currentDate.month >> currentDate.year;

    // Calculate and display the age
    int age = student1.getAge(currentDate);
    if (age != -1) {
        std::cout << "Age: " << age << " years" << std::endl;
    } else {
        std::cout << "Invalid date of birth." << std::endl;
    }

    return 0;
}
