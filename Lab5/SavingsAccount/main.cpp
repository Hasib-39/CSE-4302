#include <iostream>
#include "SavingsAccount.h"

using namespace std;



int main()
{
    SavingsAccount saver1, saver2;
    saver1.SetsavingBalance(2000.00);
    saver2.SetsavingBalance(3000.00);

    saver1.SetannualInterestrate(3);
    saver1.calculateMonthlyInterest();
    cout << saver1.GetsavingBalance() << endl;

    saver1.SetannualInterestrate(4);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "Saver1 balance: " << saver1.GetsavingBalance() << endl;
    cout << "Created Objects: " << SavingsAccount::getcreatedObjects() << endl;
    cout << "Destroyed Objects: " << SavingsAccount::getdestroyedObjects() << endl;
    return 0;
}
