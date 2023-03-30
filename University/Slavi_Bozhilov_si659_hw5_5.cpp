
#include <iostream>
using namespace std;
void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
void Print(double arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int n = 5;
    int arr1[5]{ 1,2,3,4,5 };
    double arr2[5]{ 1.5,2.5,3.5,4.5,5.5 };
    cout << "***Print int array***" << endl;
    Print(arr1, n);
    cout << "***Print double array***" << endl;
    Print(arr2, n);
}
