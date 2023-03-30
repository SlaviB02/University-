
#include <iostream>
using namespace std;
int optimum(int arr[], int n, bool (*fp)(int, int));


bool compare_less(int a, int b) {
    return  a < b;
}
bool compare_greater(int a, int b) {
    return  a > b;
}

int main()
{
    const int SIZE = 5;
    int arr[SIZE] = { 1,2,3,4,5 };
    cout << "Max element:" << optimum(arr, SIZE, compare_less)<<endl;
    cout << "Min element:" << optimum(arr, SIZE, compare_greater)<<endl;
}
int optimum(int arr[], int n, bool (*fp)(int, int))
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (fp(result, arr[i]) == true)
        {
            result = arr[i];
        }
    }
    return result;
}

