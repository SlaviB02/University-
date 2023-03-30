
#include <iostream>
using namespace std;
template< typename T>
void Print(T a[], int b) 
{
    for (int i = 0; i < b; i++)
    {
        cout << a[i]<<endl;
    }
   
}
int main()
{
    int n = 5;
    int arr1[5]{ 1,2,3,4,5 };
    double arr2[5]{ 1.5,2.5,3.5,4.5,5.5 };
    string arr3[5]{"Ivan","Petar","Marin","Niki","Emo"};
    cout << "***Print int array***" << endl;
    Print(arr1, n);
    cout << "***Print double array***" << endl;
    Print(arr2, n);
    cout << "***Print string array***" << endl;
    Print(arr3, n);
}
