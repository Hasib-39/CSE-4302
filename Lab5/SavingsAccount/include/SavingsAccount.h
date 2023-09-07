#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

using namespace std;
class SavingsAccount
{
    private:
        static double annualInterestrate;
        double savingBalance;
        static int createdObjects;
        static int destroyedObjects;
    public:
        SavingsAccount();
        ~SavingsAccount();
        static double GetannualInterestrate() { return annualInterestrate; }
        static void SetannualInterestrate( double val) { annualInterestrate = val; }
        double GetsavingBalance() { return savingBalance; }
        void SetsavingBalance(double val) { savingBalance = val; }
        void calculateMonthlyInterest();
        static int getcreatedObjects()
        {
            return createdObjects;
        }
        static int getdestroyedObjects()
        {
            return destroyedObjects;
        }

    protected:


};

#endif // SAVINGSACCOUNT_H
