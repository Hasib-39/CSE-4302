#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Engineer.h"
#include "Designer.h"


using namespace std;

int main()
{
    Employee emp1("hasib", "1002", 20000, true);
    cout << emp1.getEmpId() << endl;
    Manager manager("John Doe", "M123", true);
    Engineer engineer("Alice Smith", "E456", true);
    Designer designer("Bob Johnson", "D789", true);

    std::cout << "Manager's Yearly Income: $" << manager.yearlyIncome() << std::endl;
    std::cout << "Engineer's Yearly Income: $" << engineer.yearlyIncome() << std::endl;
    std::cout << "Designer's Yearly Income: $" << designer.yearlyIncome() << std::endl;

    return 0;
}
