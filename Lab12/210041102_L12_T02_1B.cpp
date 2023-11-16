#include <iostream>
#include <vector>
using namespace std;

template <class T>
class my_stack
{
    vector<T> data;

public:
    void push(T object)
    {
        data.push_back(object);
    }

    T pop()
    {
        T last = data.back();
        data.pop_back();
        return last;
    }

    T peek()
    {
        return data.back();
    }
};

int main()
{
    my_stack<int> int_stack;
    int_stack.push(1);
    int_stack.push(2);
    int_stack.push(3);
    cout << "int stack..." << endl;
    cout << "Peek 1: " << int_stack.peek() << endl;
    cout << "Pop 1: " << int_stack.pop() << endl;
    cout << "Peek 2: " << int_stack.peek() << endl;

    my_stack<double> double_stack;
    double_stack.push(1.1);
    double_stack.push(2.2);
    double_stack.push(3.3);

    cout << endl;
    cout << "double stack..." << endl;
    cout << "Peek 1: " << double_stack.peek() << endl;
    cout << "Pop 1: " << double_stack.pop() << endl;
    cout << "Peek 2: " << double_stack.peek() << endl;

    return 0;
}
