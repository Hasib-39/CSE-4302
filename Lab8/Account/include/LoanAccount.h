#ifndef LOANACCOUNT_H
#define LOANACCOUNT_H

#include <Account.h>
#pragma once

class LoanAccount : public Account
{
public:
    LoanAccount(string ac_name, float _balance, float inRate, float mda);

    float GetinterestRate() { return interestRate; }
    void SetinterestRate(float val) { interestRate = val; }
    float GetmonthlyDepositAmount() { return monthlyDepositAmount; }
    void SetmonthlyDepositAmount(float val) { monthlyDepositAmount = val; }
    const static int GetaccountPrefix() { return accountPrefix; }
    string nextAccountNo();

protected:
private:
    float interestRate;
    float monthlyDepositAmount;
    const static int accountPrefix;
    static int nextAccount;
};

#endif // LOANACCOUNT_H
