// student.cpp
#include<iostream>
#include "student.h"
#include<string>
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

// Function to set all information
void Student::setInfo(const std::string& newName, int day, int month, int year, int newId, double newCGPA) {
    setName(newName);
    setDateOfBirth(day, month, year);
    setId(newId);
    setCGPA(newCGPA);
}

void Student::getInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Date of Birth: " << dateOfBirth.day << "-" << dateOfBirth.month << "-" << dateOfBirth.year << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "CGPA: " << cgpa << std::endl;
}
