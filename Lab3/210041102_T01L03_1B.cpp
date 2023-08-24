#include<iostream>
using namespace std;

class Counter{
private:
    int count;
    int step_val;
public:
    Counter(){
        count = 0;
        step_val = 1;
    }
    void setIncrementStep(int step);
    int getCount();
    void increment();
    void resetCount();
};

void Counter::setIncrementStep(int step){
    step_val = step;
}
int Counter::getCount(){
    return count;
}

void Counter::increment(){
    count += step_val;
}

void Counter::resetCount(){
    count = 0;
}
int main(){
    Counter count1;
    cout << "initial count : ";
    cout << count1.getCount() << endl;
    count1.increment();
    count1.increment();
    count1.increment();
    cout << "value after increment three times....default step = 1 : "; 
    cout << count1.getCount() << endl;

    cout << "assign new step = 4  and increment twice: ";
    count1.setIncrementStep(4);
    
    count1.increment();
    count1.increment();

    //value after increment
    cout << count1.getCount() << endl;

    count1.resetCount();
    cout << "reset count...value : ";
    cout << count1.getCount() << endl;


}