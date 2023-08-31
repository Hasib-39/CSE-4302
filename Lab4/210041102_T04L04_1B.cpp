#include<iostream>

using namespace std;

class ZooAnimal{
private:
    string name_of_Animal;
    int birthyear;
    int cageNumber;
    float weight;
    int height;
public:
    ZooAnimal(string name = "", int year = 2023, int cageNo = 0, float wt = 1, int ht = 1){
        setName(name);
        setbirthyr(year);
        setcageno(cageNo);
        setweight(wt);
        setheight(ht);
    }

    void setName(string name){
        name_of_Animal = name;
    }

    void setbirthyr(int year){
        if(year > 2023){
            cout << "Your year is in future!!" << endl;
        }
        else {
            birthyear = year;
        }
    }

    void setcageno(int cage){
        if (cage < 0){
            cout << "Cage no cannot be negative!!" << endl;
        }
        else
            cageNumber = cage;
    }

    void setweight(float wt){
        if(wt < 0)
            cout << "Weight cannot be negative!!" << endl;
        else
            weight = wt;
    }

    void setheight(int ht){
        if(ht < 0)
            cout << "Height cannot be negative!!" << endl;
        else 
            height = ht;
    }

    string getName(){
        return name_of_Animal;
    }

    int getbirthyr(){
        return birthyear;
    }

    int getcageno(){
        return cageNumber;
    }

    float getweight(){
        return weight;
    }

    int getheight(){
        return height ;
    }

    void displayInfo(){
        cout << "Name of Animal: " << name_of_Animal << endl;
        cout << "Birth Year: " << birthyear << endl;
        cout << "Cage No: " << cageNumber << endl;
        cout << "Weight: " << weight << endl;
        cout << "Height: " << height << endl;
    }
    void getAge(){
        int age = (2023 - birthyear);
        cout << "Age of the animal is " << age << " years." << endl;
    }
    ~ZooAnimal(){
        cout << "Destructor: " << endl;
        displayInfo();
    }   
};
int main(){
    ZooAnimal Animal1("Tiger", 2015, 2, 5.6, 2);

    Animal1.displayInfo();

    Animal1.getAge();

    cout << "Birthyear: " << Animal1.getbirthyr() << endl;

    Animal1.setbirthyr(2025);
}