#include<iostream>

using namespace std;

class Calculator{
private:
    int current_val;
public:
    Calculator(){
        current_val = 0;
    }
    Calculator(int val ){
        current_val = val;
    }

    int getValue(){
        return current_val;
    }
    void setvalue(int val){
        current_val = val;
    }

    void add(int val){
        current_val += val;
    }
    void subtract(int val){
        current_val -= val;
    } 
    void multiply(int val){
        current_val *= val;
    }

    void divideBy(int val){
        if(val == 0){
            cout << "Error : divide by 0 is undefined." << endl;
        }
        else
            current_val /= val;
    }

    void clear(){
        current_val = 0;
    }
    void display(){
        cout << "Calculator display: " << current_val << endl;
    }
    ~Calculator(){
        cout << "Calculator object is destroyed." << endl;
    }
};
int main (){
    Calculator calc1;
    cout << "Add 10" << endl;
    calc1.add(10);
    calc1.display();

    cout << "Add 7" << endl;
    calc1.add(7);
    cout << "Calculator display: " << calc1.getValue() << endl;

    cout << "Multiply 31" << endl;
    calc1.multiply(31);
    cout << "Calculator display: " << calc1.getValue() << endl;

    cout << "Subtract 42" << endl;
    calc1.subtract(42);
    cout << "Calculator display: " << calc1.getValue() << endl;

    cout << "Divide by 7" << endl;
    calc1.divideBy(7);
    cout << "Calculator display: " << calc1.getValue() << endl;

    cout << "Divide by 0" << endl;
    calc1.divideBy(0);
    cout << "Calculator display: " << calc1.getValue() << endl;

    cout << "Add 3" << endl;
    calc1.add(3);
    cout << "Calculator display: " << calc1.getValue() << endl;

    cout << "Subtract 1" << endl;
    calc1.subtract(1);
    cout << "Calculator display: " << calc1.getValue() << endl;

    cout << "Clear " << endl;
    calc1.clear();
    cout << "Calculator display: " << calc1.getValue() << endl;
}