// employee.cpp

#include "employee.h"
#include <iostream>

using namespace std;
// Constructor
Employee::Employee()
{ }

// Setter functions with validation
void Employee::setName(const std::string& newName) {
    if (newName.length() > 2) {
        name = newName;
    } else {
        name = "John Doe";
    }
}

void Employee::setDateOfBirth(int day, int month, int year) {
    Date currentDate;
    currentDate.day = 1;
    currentDate.month = 1;
    currentDate.year = 2022;

    if (year <= currentDate.year - 18) {
        dateOfBirth.day = day;
        dateOfBirth.month = month;
        dateOfBirth.year = year;
    } else {
        dateOfBirth.day = 1;
        dateOfBirth.month = 1;
        dateOfBirth.year = 2002;
    }
}

void Employee::setSalary(double newSalary) {
    if (newSalary >= 10000.0 && newSalary <= 100000.0) {
        salary = newSalary;
    } else {
        salary = 10000.0;
    }
}

// Getter functions
std::string Employee::getName() const {
    return name;
}

Date Employee::getDateOfBirth() const {
    return dateOfBirth;
}

double Employee::getSalary() const {
    return salary;
}

// Function to display all stored information
void Employee::getInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Date of Birth: " << dateOfBirth.day << "-" << dateOfBirth.month << "-" << dateOfBirth.year << std::endl;
    std::cout << "Salary: BDT " << salary << std::endl;
}

// Function to set all information
void Employee::setInfo(const std::string& newName, int day, int month, int year, double newSalary) {
    setName(newName);
    setDateOfBirth(day, month, year);
    setSalary(newSalary);
}
