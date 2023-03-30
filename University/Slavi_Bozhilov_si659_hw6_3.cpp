#include <iostream>
#include <algorithm>
using namespace std;
template< typename T>
void Print(T a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

}
int main()
{
    const int SIZE = 5;
    int arr1[SIZE] = { 5,1,2,4,3 };
    double arr2[SIZE] = { 2.5,3.5,1.5,5.5,4.5 };
    string cities[4] = { "Burgas", "Varna","Ruse","Sofia" };
    cout << "Int array before sorting:" << endl;
    Print(arr1, SIZE);
    sort(arr1, (arr1+SIZE));
    cout << "Int array after ascending sorting" << endl;
    Print(arr1, SIZE);
    cout << "Int array after descending sorting" << endl;
    sort(arr1, (arr1 + SIZE), [](int a, int b) {return a > b; });
    Print(arr1, SIZE);
    cout << "-------------------------------" << endl;
    cout << "Double array before sorting:" << endl;
    Print(arr2, SIZE);
    sort(arr2, (arr2 + SIZE));
    cout << "Double array after ascending sorting" << endl;
    Print(arr2, SIZE);
    cout << "Double array after descending sorting" << endl;
    sort(arr2, (arr2 + SIZE), [](double a, double b) {return a > b; });
    Print(arr2, SIZE);
    cout << "-------------------------------" << endl;
    cout << "String array before sorting:" << endl;
    Print(cities,4);
    sort(cities, (cities + 4));
    cout << "String array after ascending sorting" << endl;
    Print(cities, 4);
    cout << "String array after descending sorting" << endl;
    sort(cities, (cities + 4), [](string a, string b) {return a > b; });
    Print(cities, 4);
}

