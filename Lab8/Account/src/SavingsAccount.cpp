#include "SavingsAccount.h"
#include <bits/stdc++.h>

using namespace std;
const int SavingsAccount::accountPrefix = 200;
int SavingsAccount::nextAccount = 0;

SavingsAccount::SavingsAccount(string ac_name, float _balance, float inRate, float mda)
{
    this->SetaccountName(ac_name);
    nextAccount++;
    string ac_no = nextAccountNo();
    this->SetaccountNo(ac_no);
    this->Setbalance(_balance);
    this->SetinterestRate(inRate);
    this->SetmonthlyDepositAmount(mda);
}

string SavingsAccount::nextAccountNo()
{
    string ac_no = to_string(accountPrefix) + to_string(nextAccount);
    return ac_no;
}
