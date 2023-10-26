#include "Designer.h"
#include<iostream>
#include<string>
using namespace std;
Designer::Designer(const std::string& name, const std::string& emp_id, bool onDuty)
    : Employee(name, emp_id, 7000, onDuty) {}

float Designer::yearlyIncome() const {
    return getMonthlySalary() * 12;
}

