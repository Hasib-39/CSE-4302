#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"
#include<iostream>
#include<string>
using namespace std;

class Engineer : public Employee {
public:
    Engineer(const std::string& name, const std::string& emp_id, bool onDuty);

    float yearlyIncome() const;
};


#endif // ENGINEER_H
