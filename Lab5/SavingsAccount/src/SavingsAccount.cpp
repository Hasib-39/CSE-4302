#include<iostream>
#include "SavingsAccount.h"

using namespace std;
double SavingsAccount::annualInterestrate;
int SavingsAccount::createdObjects;
int SavingsAccount::destroyedObjects;

SavingsAccount::SavingsAccount()
{
    createdObjects++;
}
SavingsAccount::~SavingsAccount()
{
    destroyedObjects++;
}

void SavingsAccount::calculateMonthlyInterest()
{
    double MonthlyInterest;
    double balance = GetsavingBalance();
    MonthlyInterest = (SavingsAccount::GetannualInterestrate()) / 1200;
    balance += (balance * MonthlyInterest );
    //cout << balance << endl;
    SetsavingBalance(balance);
}


