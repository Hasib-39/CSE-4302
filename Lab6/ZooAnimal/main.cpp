#include <iostream>
#include "ZooAnimal.h"
using namespace std;

int main() {
    ZooAnimal lion("Lion", 2015, 1, 150.0, 100);
    ZooAnimal lion2("Lion", 2016, 2, 170.0, 120);
    lion.printInfo();
    cout << "Is Lion heavier than another Lion? " << (lion > lion2) << endl;
    cout << "Is Lion lighter than another Lion? " << (lion < lion2) << endl;

    lion += 10;
    cout << "Lion's weight after increasing by 10 units: " << lion.getWeightData() << endl;

    lion -= 5;
    cout << "Lion's weight after decreasing by 5 units: " << lion.getWeightData() << endl;

    return 0;
}
