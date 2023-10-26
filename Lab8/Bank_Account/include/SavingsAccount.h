#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <Account.h>


class SavingsAccount : public Account
{
    public:
        SavingsAccount();
        ~SavingsAccount();

        float GetinterestRate() { return interestRate; }
        void SetinterestRate(float val) { interestRate = val; }
        float GetmonthlyDepositAmount() { return monthlyDepositAmount; }
        void SetmonthlyDepositAmount(float val) { monthlyDepositAmount = val; }
        const static int GetaccountPrefix() { return accountPrefix; }
        void SetaccountPrefix(const static int val) { accountPrefix = val; }
        static int GetnextAccount() { return nextAccount; }
        void SetnextAccount(static int val) { nextAccount = val; }
        void nextAccountNo();

    protected:

    private:
        float interestRate;
        float monthlyDepositAmount;
        const static int accountPrefix;
        static int nextAccount;
};




#endif // SAVINGSACCOUNT_H
