// student.cpp

#include "student.h"
#include <iostream>
#include <string>

using namespace std;

// Constructor
Student::Student() {
    name = "";
    dateOfBirth.day = 0;
    dateOfBirth.month = 0;
    dateOfBirth.year = 0;
    id = 0;
    cgpa = 0.0;
}

// Setter functions
void Student::setName(const std::string& newName) {
    name = newName;
}

void Student::setDateOfBirth(int day, int month, int year) {
    dateOfBirth.day = day;
    dateOfBirth.month = month;
    dateOfBirth.year = year;
}

void Student::setId(int newId) {
    id = newId;
}

void Student::setCGPA(double newCGPA) {
    cgpa = newCGPA;
}

// Getter functions
std::string Student::getName() const {
    return name;
}

Date Student::getDateOfBirth() const {
    return dateOfBirth;
}

int Student::getId() const {
    return id;
}

double Student::getCGPA() const {
    return cgpa;
}

// Function to display all stored information
void Student::getInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Date of Birth: " << dateOfBirth.day << "-" << dateOfBirth.month << "-" << dateOfBirth.year << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "CGPA: " << cgpa << std::endl;
}

void Student::setInfo(const std::string& newName, int day, int month, int year, int newId, double newCGPA) {
    setName(newName);
    setDateOfBirth(day, month, year);
    setId(newId);
    setCGPA(newCGPA);
}
// Function to calculate and return the age
int Student::getAge(const Date& currentDate) const {
    if (currentDate.year < dateOfBirth.year ||
        (currentDate.year == dateOfBirth.year && currentDate.month < dateOfBirth.month) ||
        (currentDate.year == dateOfBirth.year && currentDate.month == dateOfBirth.month && currentDate.day < dateOfBirth.day)) {
        // Invalid date of birth (future date)
        return -1;
    }

    int age = currentDate.year - dateOfBirth.year;
    if (currentDate.month < dateOfBirth.month || (currentDate.month == dateOfBirth.month && currentDate.day < dateOfBirth.day)) {
        age--;
    }

    return age;
}
