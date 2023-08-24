#include<iostream>

using namespace std;
class bank_account{
private:
    string name;
    int acc_no;
    string acc_type;
    double balance_;
public:
    bank_account(){
        balance_ = 0;
    }
    void customerDetails(string cname, int acc_no);
    void accountType(string type);
    void balance();
    void deposit(double amount);
    void withdraw(double amount);
    void display();
};

void bank_account::accountType(string type){
    acc_type = type;
}

void bank_account::customerDetails(string cname, int no){
    name = cname;
    acc_no = no;
}

void bank_account::balance(){
    cout << "Balance of the customer: " << balance_ << endl;
}

void bank_account::deposit(double amount){
    balance_ += amount;
    cout << "After deposit: " << balance_ << endl;
}

void bank_account::withdraw(double amount){
    if(amount > balance_)
        cout << "Insufficient balance!!" << endl;
    else{
        balance_ -= amount;
        cout << "After withdraw: " << balance_ << endl;
    }
    
}

void bank_account::display(){
    cout << "Customer Name: " << name << endl;
    cout << "Account No: " << acc_no << endl;
    cout << "Account Type: " << acc_type << endl;
    cout << "Account Balance: " << balance_ << endl;
}

int main(){
    bank_account acc1;
    cout << "Initial garbage:" << endl;
    acc1.display();

    acc1.customerDetails("Nuh Islam", 210041108);
    acc1.accountType("Savings");
    cout << "After adding new customer: " << endl;
    acc1.display();

    cout << "Showing balance seperately: " << endl;
    acc1.balance();

    cout << "Depositing 20000/= : " << endl;
    acc1.deposit(20000);

    cout << "Withdrawing 10000/= : " << endl;
    acc1.withdraw(10000);

    cout << "Withdrawing Invalid amount(1000000): "<< endl;
    acc1.withdraw(100000);

    cout << "Display info: " << endl;
    acc1.display();

}