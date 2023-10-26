#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include<iostream>
#include<string>
using namespace std;

class Manager : public Employee {
public:
    Manager(const std::string& name, const std::string& emp_id, bool onDuty);

    float yearlyIncome() const;
};

#endif // MANAGER_H
