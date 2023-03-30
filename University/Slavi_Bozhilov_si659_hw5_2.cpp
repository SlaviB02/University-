#include <iostream>
using namespace std;
double* mult2(const double* arr1, const int* arr2, int n);
int main()
{
    int n = 5;
    const double* arr1 = new double[n] {2.3, 1.1, 4.3, 5, 6};
    const int *arr2=new int[n]{ 1,2,3,4,5 };
    double *arr3 = new double[n];
    arr3 = mult2(arr1, arr2, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr3[i] << endl;
    }
    delete[]arr1;
    delete[]arr2;
    delete[]arr3;
}
double* mult2(const double* arr1, const int* arr2, int n)
{
    double* arr3 = new double[n];
    for (int i = 0; i < n; i++)
    {
        double mult = arr1[i] * arr2[i];
        arr3[i] = mult;
    }
    return arr3;
}