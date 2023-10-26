#ifndef TWOYEARMDS_H
#define TWOYEARMDS_H
#include <MonthlyDepositScheme.h>
#include<iostream>
#pragma once
using namespace std;
class TwoYearMDS : public MonthlyDepositScheme
{
    public:
        TwoYearMDS(string ac_name, float _balance, float inRate, float mda, float mx_int);

        float GetmaximumInterest() { return maximumInterest; }
        void SetmaximumInterest(float val) { maximumInterest = val; }

    protected:

    private:
        float maximumInterest;
};

#endif // TWOYEARMDS_H
