#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <Account.h>
#pragma once

class SavingsAccount : public Account
{
public:
    SavingsAccount(string ac_name, float _balance, float inRate, float mda);

    float GetinterestRate() { return interestRate; }
    void SetinterestRate(float val) { interestRate = val; }
    float GetmonthlyDepositAmount() { return monthlyDepositAmount; }
    void SetmonthlyDepositAmount(float val) { monthlyDepositAmount = val; }
    const static int GetaccountPrefix() { return accountPrefix; }
    static int GetnextAccount() { return nextAccount; }
    string nextAccountNo();

private:
    float interestRate;
    float monthlyDepositAmount;
    const static int accountPrefix;
    static int nextAccount;
};

#endif // SAVINGSACCOUNT_H
