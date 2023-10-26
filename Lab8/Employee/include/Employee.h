#include<iostream>
#include<string>
using namespace std;

class Employee {
public:
    Employee(const std::string name, const std::string emp_id, float monthly_salary, bool onDuty);

    std::string getName() const;
    std::string getEmpId() const;
    float getMonthlySalary() const;
    bool isOnDuty() const;

    float yearlyIncome() const;

private:
    std::string name;
    std::string emp_id;
    float monthly_salary;
    bool onDuty;
};


