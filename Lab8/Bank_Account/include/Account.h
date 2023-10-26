#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<string>
using namespace std;
class Account
{
    public:
        Account();

        int GetaccountNo() { return accountNo; }
        void SetaccountNo(string val) { accountNo = val; }
        string GetaccountName() { return accountName; }
        void SetaccountName(string val) { accountName = val; }
        float Getbalance() { return balance; }
        void Setbalance(float val) { balance = val; }

    protected:

    private:
        int accountNo;
        string accountName;
        float balance;
};

#endif // ACCOUNT_H
