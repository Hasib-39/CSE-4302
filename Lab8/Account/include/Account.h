#ifndef ACCOUNT_H
#define ACCOUNT_H
#pragma once
#include<iostream>
#include<string>
using namespace std;
class Account
{
    public:

        string GetaccountNo() { return accountNo; }
        void SetaccountNo(string val) { accountNo = val; }
        string GetaccountName() { return accountName; }
        void SetaccountName(string val) { accountName = val; }
        float Getbalance() { return balance; }
        void Setbalance(float val) { balance = val; }

    protected:

    private:
        string accountNo;
        string accountName;
        float balance;
};

#endif // ACCOUNT_H
