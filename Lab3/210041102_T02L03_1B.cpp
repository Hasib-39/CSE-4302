#include<iostream>

using namespace std;
class RationalNumber {
private:
    int numerator;
    int denominator;
public:
    void assign(int numer, int denom);
    double convert();
    void invert();
    void print();
};

void RationalNumber::assign(int numer, int denom){
    if(denom == 0){
        cout << "Undefined input is not permitted!!" << endl;
        return;
    }
    else{
        numerator = numer;
        denominator = denom;
    }
}

double RationalNumber::convert(){
    double fraction;
    fraction = (double)numerator/(double)denominator;
    return fraction;
}

void RationalNumber::invert(){
    if(numerator == 0){
        cout << "Undefined case is not permitted!!" << endl;
    }
    else {
        swap(numerator, denominator);
    }
}

void RationalNumber::print(){
    cout << "The rational number is " << numerator << "/" << denominator << endl;
}
int main(){
    RationalNumber frac;
    cout << "initial gurbage value: "<< endl;
    frac.print();
    
    frac.assign(3,4);
    cout << "After assigning valid value: " << endl;
    frac.print();

    cout << "After assigning invalid value: " << endl;
    frac.assign(4,0);

    cout << "After assigning valid vallue: " << endl;
    frac.assign(5, 8);
    frac.print();

    cout << "After inverting value: " << endl;
    frac.invert();
    frac.print();

    cout << "After converting to double: "<< endl;
    cout << "Decimal number: " << frac.convert() << endl;

    frac.assign(0, 5);
    cout << "After assigning valid value(0, 5): " << endl;
    frac.print();

    cout << "After invert: " << endl;
    frac.invert();
    frac.print();

    return 0;
    
}