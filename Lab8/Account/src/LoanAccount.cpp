#include <bits/stdc++.h>

using namespace std;
#include "LoanAccount.h"

const int LoanAccount::accountPrefix = 900;
int LoanAccount::nextAccount = 0;

LoanAccount::LoanAccount(string ac_name, float _balance, float inRate, float mda)
{
    this->SetaccountName(ac_name);
    nextAccount++;
    string ac_no = nextAccountNo();
    this->SetaccountNo(ac_no);
    this->Setbalance(_balance);
    this->SetinterestRate(inRate);
    this->SetmonthlyDepositAmount(mda);
}

string LoanAccount::nextAccountNo()
{
    string ac_no = to_string(accountPrefix) + to_string(nextAccount);
    return ac_no;
}
