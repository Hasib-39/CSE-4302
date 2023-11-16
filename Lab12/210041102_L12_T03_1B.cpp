#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class my_stack
{
    vector<T> data;

public:
    void push(T object)
    {
        data.push_back(object);
    }

    class EmptyStackException
    {
    };

    T pop()
    {
        if (data.empty())
        {
            throw EmptyStackException();
        }
        T last = data.back();
        data.pop_back();
        return last;
    }

    T peek()
    {
        if (data.empty())
        {
            throw EmptyStackException();
        }
        return data.back();
    }
};

int main()
{
    my_stack<int> int_stack;
    try
    {
        int_stack.push(1);
        int_stack.push(2);
        int_stack.push(3);

        cout << "The last element in int_stack is: " << int_stack.peek() << endl;
        cout << "The last element in int_stack after popping is: " << int_stack.pop() << endl;
    }
    catch (my_stack<int>::EmptyStackException) // here no error will be shown as there is faulty case
    {
        cout << "Exception: int stack is empty" << endl;
    }

    my_stack<double> double_stack;
    try
    {
        double d = double_stack.pop(); // stack is empty, so this will show error.
        double_stack.push(1.1);
        double_stack.push(2.2);
        double_stack.push(3.3);

        cout << "The last element in double_stack is: " << double_stack.peek() << endl;
        cout << "The last element in double_stack after popping is: " << double_stack.pop() << endl;
    }
    catch (my_stack<double>::EmptyStackException)
    {
        cout << "Exception: double stack is empty" << endl;
    }

    return 0;
}
