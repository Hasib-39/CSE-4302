#ifndef MONTHLYDEPOSITSCHEME_H
#define MONTHLYDEPOSITSCHEME_H

#include <Account.h>


class MonthlyDepositScheme : public Account
{
    public:
        MonthlyDepositScheme();
        ~MonthlyDepositScheme();

        float GetinterestRate() { return interestRate; }
        void SetinterestRate(float val) { interestRate = val; }
        float GetmonthlyDepositAmount() { return monthlyDepositAmount; }
        void SetmonthlyDepositAmount(float val) { monthlyDepositAmount = val; }
        const static int GetaccountPrefix() { return accountPrefix; }
        static int GetnextAccount() { return nextAccount; }

    protected:

    private:
        float interestRate;
        float monthlyDepositAmount;
        const static int accountPrefix;
        static int nextAccount;
};

#endif // MONTHLYDEPOSITSCHEME_H
