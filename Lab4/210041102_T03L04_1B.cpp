#include<iostream>

using namespace std;

class BankAccount{
private:
    int acc_no;
    string acc_holder_name;
    string acc_type;
    double curr_balance;
    double min_balance;
public:
    BankAccount(){

    }
    BankAccount(int no, string name, string type,double curr, double min){
        acc_no = no;
        acc_holder_name = name;
        acc_type = type;
        curr_balance = curr;
        min_balance = min;
    }
    void takeInfo(){
        cout << "Enter Account no: ";
        cin >> acc_no;

        cout << "Enter Name: ";
        cin >> acc_holder_name;

        cout << "Enter Account Type: ";
        cin >> acc_type;

        cout << "Enter Current Balance: ";
        cin >> curr_balance;

        cout << "Enter Minimum balance: ";
        cin >> min_balance;
    }

    void showInfo(){
        cout << "Account no: " << acc_no << endl;
        cout << "Account Holder Name: " << acc_holder_name << endl;
        cout << "Account type: " << acc_type << endl;
        cout << "Current Balance: " << curr_balance << endl;
        cout << "Minimum Balance: " << min_balance << endl;
    }

    void showbalance(){
        cout << "Current Balance: " << curr_balance <<  endl;
    }

    void deposit(int amount){
        if(amount < 0){
            cout << "Negative amount cannot be deposited!!" << endl;
        }
        else {
            curr_balance += amount;
        }
    }

    void withdraw(int amount){
        if(amount < 0 ){
            cout << "Negative amount cannot be withdrawn!!" << endl;
        }
        else if((curr_balance - amount) < min_balance){
            cout << "Your account balance cannot be less than minimum balance!!" << endl;
        }
        else{
            curr_balance -= amount;
        }
    }

    void giveInterest(double val = 3){
        double interest;
        interest =  (val/100) * curr_balance;
        interest -= (0.1 * interest);
        curr_balance += interest;
    }

    ~BankAccount(){
        cout << "Account of " << acc_holder_name << " account no " << acc_no << " is destroyed with a balance BDT " << curr_balance << endl;
    }
};

int main(){
    BankAccount acc(533902,"Hasib Altaf", "Savings", 3000, 2000);
    // BankAccount acc2;
    // acc2.takeInfo();

    acc.showInfo();

    acc.showbalance();

    acc.deposit(2000);
    acc.showbalance();

    acc.deposit(-200);

    acc.withdraw(-200);

    acc.withdraw(4000);

    acc.withdraw(2000);
    acc.showbalance();

    acc.giveInterest();
    acc.showbalance();

    acc.giveInterest(5);
    acc.showbalance();


}