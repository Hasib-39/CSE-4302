#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
T amax(T *array, int size, int n)
{
    sort(array, array + size, greater<T>());
    return array[n - 1];
}

int main()
{
    int int_array[] = {1, 2, 3, 4, 5};
    double double_array[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float float_array[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

    cout << "The 3rd largest element in int_array is: " << amax(int_array, 5, 3) << endl;
    cout << "The 2nd largest element in double_array is: " << amax(double_array, 5, 2) << endl;
    cout << "The largest element in float_array is: " << amax(float_array, 5, 1) << endl;

    return 0;
}
