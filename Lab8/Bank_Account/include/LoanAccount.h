#ifndef LOANACCOUNT_H
#define LOANACCOUNT_H

#include <Account.h>


class LoanAccount : public Account
{
    public:
        LoanAccount();
        ~LoanAccount();

        float GetinterestRate() { return interestRate; }
        void SetinterestRate(float val) { interestRate = val; }
        float GetmonthlyDepositAmount() { return monthlyDepositAmount; }
        void SetmonthlyDepositAmount(float val) { monthlyDepositAmount = val; }
        const static int GetaccountPrefix() { return accountPrefix; }

    protected:

    private:
        float interestRate;
        float monthlyDepositAmount;
        const static int accountPrefix;
        static int nextAccount;
};

const int LoanAccount::accountPrefix = 900;
int LoanAccount::nextAccount = 0;

#endif // LOANACCOUNT_H
