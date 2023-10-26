#ifndef DESIGNER_H
#define DESIGNER_H

#include "Employee.h"
#include<iostream>
#include<string>
using namespace std;

class Designer : public Employee {
public:
    Designer(const std::string& name, const std::string& emp_id, bool onDuty);

        float yearlyIncome() const;
};


#endif // DESIGNER_H
