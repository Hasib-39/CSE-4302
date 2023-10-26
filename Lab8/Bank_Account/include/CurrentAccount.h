#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H

#include <Account.h>


class CurrentAccount : public Account
{
    public:
        CurrentAccount();

        const static GetserviceCharge() { return serviceCharge; }
        void SetserviceCharge(const static val) { serviceCharge = val; }
        void nextAccountNo();

    protected:

    private:
        const static float serviceCharge;
        static int nextAccount;
        const static int accountPrefix;
};



#endif // CURRENTACCOUNT_H
