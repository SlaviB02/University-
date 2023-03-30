
#include <iostream>
using namespace std;

template<typename T>
T optimum(T arr[], int n, bool (*fp)(T, T))
{
    T result = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (fp(result, arr[i]) == true)
        {
            result = arr[i];
        }
    }
    return result;
}

template<typename T>
bool compare_less(T a,T b) {
    return  a < b;
}
template<typename T>
bool compare_greater(T a, T b) {
    return  a > b;
}

int main()
{
    const int SIZE = 5;
    int arr1[SIZE] = { 1,2,3,4,5 };
    double arr2[SIZE] = { 1.5,2.5,3.5,4.5,5.5 };
    string cities[4]={ "Burgas", "Varna","Ruse","Sofia"};

    cout << "***Int Array***" << endl;
    cout << "Max element:" << optimum(arr1, SIZE, compare_less) << endl;
    cout << "Min element:" << optimum(arr1, SIZE, compare_greater) << endl;
    cout << "***Double Array***" << endl;
    cout << "Max element:" << optimum(arr2, SIZE, compare_less) << endl;
    cout << "Min element:" << optimum(arr2, SIZE, compare_greater) << endl;
    cout << "***String Array***" << endl;
    cout << "Max element:" << optimum(cities, 4, compare_less) << endl;
    cout << "Min element:" << optimum(cities, 4, compare_greater) << endl;
}

