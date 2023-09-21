#include "Weight.h"
#include <iostream>

using namespace std;

int main() {

    Weight weight1(50.0);
    cout << "Input 50kg weight." << endl;
    cout << "Converting weight 1 to pound-ounce: ";
    weight1.showWeight();
    cout << endl;

    double weight1InKg = weight1;
    cout << "Converting Weight1 to kg: " << weight1InKg << " kg" << endl;

    cout << "Input pound-ounce: 120-8.5 " << endl;
    Weight weight2(120, 8.5);
    cout << "weight 2 in pound-ounce: ";
    weight2.showWeight();
    cout << endl;

    double weight2InKg = weight2;
    cout << "Converting Weight2 to kg: " << weight2InKg << " kg" << endl;

    return 0;
}
