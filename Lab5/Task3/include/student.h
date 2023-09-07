// student.h

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
struct Date {
    int day;
    int month;
    int year;
};

class Student {
private:
    std::string name;
    Date dateOfBirth;
    int id;
    double cgpa;

public:
    // Constructor to initialize with default values
    Student();

    // Setter functions
    void setName(const std::string& newName);
    void setDateOfBirth(int day, int month, int year);
    void setId(int newId);
    void setCGPA(double newCGPA);

    // Getter functions
    std::string getName() const;
    Date getDateOfBirth() const;
    int getId() const;
    double getCGPA() const;

    // Function to display all stored information
    void getInfo() const;
    void setInfo(const std::string& newName, int day, int month, int year, int newId, double newCGPA);
    // Function to calculate and return the age
    int getAge(const Date& currentDate) const;
};

#endif
