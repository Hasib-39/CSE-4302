#include<iostream>
#include<string>

using namespace std;

class Flight{
private:
    int flight_no;
    string destination;
    float distance;
    float max_fuel_capacity;
    double CalFuel(){
        if(distance <= 1000)
            return 500;
        else if(distance > 1000 && distance <= 2000)
            return 1100;
        else return 2200;
    }
public:
    void FeedInfo(){
        cout << "Enter Flight No: ";
        cin >> flight_no;
        

        cout << "Enter Destination: ";
        cin >> destination;
        

        cout << "Enter Distance: ";
        cin >> distance;
        

        cout << "Enter MaxFuelCapacity: ";
        cin >> max_fuel_capacity;
        
    }

    void ShowInfo(){
        cout << "Flight no: " << flight_no << endl;
        cout << "Destinantion: " << destination << endl;
        cout << "Distance: " << distance << endl;
        cout << "MaxFuelCapacity: " << max_fuel_capacity << endl;

        if((double)max_fuel_capacity >= CalFuel()){
            cout << "Fuel Capacity is fit for this flight distance" << endl;
        }
        else {
            cout << "Not sufficient Fuel Capacity for this flight" << endl;
        }
    }
};

int main(){
    Flight f1;
    f1.FeedInfo();
    f1.ShowInfo();
}