#include <iostream>
#include "Counter.h"
using namespace std;
void testFunction(const Counter& c){
    cout << c.getCount();
}
int main() {
    Counter c1;
    c1.setIncrementStep(5);
    c1.increment();
    c1.increment();

    Counter c2;
    c2.setIncrementStep(3);
    c2.increment();

    Counter c3;
    c3.setIncrementStep(2);
    c3.increment();

    Counter c4 = c2 + c3;
    c4.increment();

    c1 += c2;

    cout << "Test Function(c1): ";
    testFunction(c1);
    cout << endl;

    cout << "c1 count: " << c1.getCount() << endl;
    c1++;
    cout << "c1 count(c1++): " << c1.getCount() << endl;
    cout << "c2 count: " << c2.getCount() << endl;
    ++c2;
    cout << "c2 count(++c2): " << c2.getCount() << endl;
    cout << "c3 count: " << c3.getCount() << endl;
    cout << "c4 count: " << c4.getCount() << endl;
    cout << "c1 == c2: " << (c1 == c2) << endl;
    cout << "c1 != c2: " << (c1 != c2) << endl;
    cout << "c1 > c2: " << (c1 > c2) << endl;

}
