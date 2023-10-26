#include "Engineer.h"
#include<iostream>
#include<string>
using namespace std;
Engineer::Engineer(const std::string& name, const std::string& emp_id, bool onDuty)
    : Employee(name, emp_id, 8000, onDuty) {}



float Engineer::yearlyIncome() const {
    return getMonthlySalary() * 12;
}
