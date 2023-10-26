#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H
#include <iostream>
#include <Account.h>
#pragma once

using namespace std;
class CurrentAccount : public Account
{
public:
    CurrentAccount(string ac_name, float _balance);

    const static int GetserviceCharge() { return serviceCharge; }
    string nextAccountNo();

private:
    const static float serviceCharge;
    static int nextAccount;
    const static int accountPrefix;
};

#endif // CURRENTACCOUNT_H
