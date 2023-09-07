// employee.h

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>


struct Date {
    int day;
    int month;
    int year;
};

class Employee {
private:
    std::string name;
    Date dateOfBirth;
    double salary;

public:
    // Constructor to initialize with default values
    Employee();

    // Setter functions with validation
    void setName(const std::string& newName);
    void setDateOfBirth(int day, int month, int year);
    void setSalary(double newSalary);

    // Getter functions
    std::string getName() const;
    Date getDateOfBirth() const;
    double getSalary() const;

    // Function to display all stored information
    void getInfo() const;

    // Function to set all information
    void setInfo(const std::string& newName, int day, int month, int year, double newSalary);
};

#endif
