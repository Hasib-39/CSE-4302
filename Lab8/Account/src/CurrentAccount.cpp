#include "CurrentAccount.h"
#include <iostream>
#include <string>

using namespace std;
const int CurrentAccount::accountPrefix = 100;
const float CurrentAccount::serviceCharge = 100;
int CurrentAccount::nextAccount = 0;

CurrentAccount::CurrentAccount(string ac_name, float _balance)
{
    this->SetaccountName(ac_name);
    nextAccount++;
    string ac_no = nextAccountNo();
    this->SetaccountNo(ac_no);
    this->Setbalance(_balance);
}

string CurrentAccount::nextAccountNo()
{
    string ac_no = to_string(accountPrefix) + to_string(nextAccount);
    return ac_no;
}
