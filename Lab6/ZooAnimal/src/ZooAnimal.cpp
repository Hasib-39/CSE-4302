#include "ZooAnimal.h"
#include<iostream>
using namespace std;

ZooAnimal::ZooAnimal() : birthYear(0), cageNumber(0), weightData(0.0), height(0) {}

ZooAnimal::ZooAnimal(const string& name, int birthYear, int cageNumber, float weight, int height)
    : nameOfAnimal(name), birthYear(birthYear), cageNumber(cageNumber), weightData(weight), height(height) {}

bool ZooAnimal::operator>(const ZooAnimal& other) const {
    return weightData > other.weightData;
}

bool ZooAnimal::operator<(const ZooAnimal& other) const {
    return weightData < other.weightData;
}

bool ZooAnimal::operator>=(const ZooAnimal& other) const {
    return weightData >= other.weightData;
}

bool ZooAnimal::operator<=(const ZooAnimal& other) const {
    return weightData <= other.weightData;
}

bool ZooAnimal::operator==(const ZooAnimal& other) const {
    return weightData == other.weightData;
}

bool ZooAnimal::operator!=(const ZooAnimal& other) const {
    return weightData != other.weightData;
}

ZooAnimal& ZooAnimal::operator+=(int value) {
    weightData += value;
    return *this;
}

ZooAnimal& ZooAnimal::operator-=(int value) {
    weightData -= value;
    return *this;
}

void ZooAnimal::printInfo() const {
    cout << "Name: " << nameOfAnimal << endl;
    cout << "Birth Year: " << birthYear << endl;
    cout << "Cage Number: " << cageNumber << endl;
    cout << "Weight: " << weightData << endl;
    cout << "Height: " << height << endl;
}
