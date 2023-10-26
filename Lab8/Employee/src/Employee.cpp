#include "Employee.h"
#include<iostream>
#include<string>
using namespace std;

Employee::Employee(const std::string _name, const std::string _emp_id, float _monthly_salary, bool _onDuty)
    : name(_name), emp_id(_emp_id), monthly_salary(_monthly_salary), onDuty(_onDuty) {}

std::string Employee::getName() const {
    return name;
}

std::string Employee::getEmpId() const {
    return emp_id;
}

float Employee::getMonthlySalary() const {
    return monthly_salary;
}

bool Employee::isOnDuty() const {
    return onDuty;
}

float Employee::yearlyIncome() const {
    return monthly_salary * 12;
}




