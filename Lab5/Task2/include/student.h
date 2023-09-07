// student.h

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

class Student {
private:
    std::string name;
    Date dateOfBirth; // Use Date structure
    int id;
    double cgpa;

public:
    // Constructor to initialize with default values
    Student();

    // Setter functions
    void setName(const std::string& newName);
    void setDateOfBirth(int day, int month, int year); // Updated setter for date of birth
    void setId(int newId);
    void setCGPA(double newCGPA);

    // Getter functions
    std::string getName() const;
    Date getDateOfBirth() const; // Updated getter for date of birth
    int getId() const;
    double getCGPA() const;

    // Function to set all information
    void setInfo(const std::string& newName, int day, int month, int year, int newId, double newCGPA); // Updated setInfo
    void getInfo() const;
};

#endif
