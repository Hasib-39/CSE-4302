#include "TwoYearMDS.h"
#include<iostream>

using namespace std;


TwoYearMDS::TwoYearMDS(string ac_name, float _balance, float inRate, float mda, float mx_int)
{
    this->SetaccountName(ac_name);
    nextAccount++;
    string ac_no = nextAccountNo();
    this->SetaccountNo(ac_no);
    this->Setbalance(_balance);
    this->SetinterestRate(inRate);
    this->SetmonthlyDepositAmount(mda);
    this->SetmaximumInterest(mx_int);
}
