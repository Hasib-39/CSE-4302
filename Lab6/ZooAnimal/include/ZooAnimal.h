#ifndef ZOOANIMAL_H
#define ZOOANIMAL_H
#include<string>
using namespace std;

class ZooAnimal {
private:
    std::string nameOfAnimal;
    int birthYear;
    int cageNumber;
    float weightData;
    int height;

public:
    ZooAnimal();
    ZooAnimal(const std::string& name, int birthYear, int cageNumber, float weight, int height);
    float getWeightData(){ return weightData;}
    bool operator>(const ZooAnimal& other) const;
    bool operator<(const ZooAnimal& other) const;
    bool operator>=(const ZooAnimal& other) const;
    bool operator<=(const ZooAnimal& other) const;
    bool operator==(const ZooAnimal& other) const;
    bool operator!=(const ZooAnimal& other) const;
    ZooAnimal& operator+=(int value);
    ZooAnimal& operator-=(int value);
    void printInfo() const;
};

#endif
