#include "Manager.h"
#include<iostream>
#include<string>
using namespace std;
Manager::Manager(const std::string& name, const std::string& emp_id, bool onDuty)
    : Employee(name, emp_id, 10000, onDuty) {}



float Manager::yearlyIncome() const {
    return getMonthlySalary() * 12;
}
