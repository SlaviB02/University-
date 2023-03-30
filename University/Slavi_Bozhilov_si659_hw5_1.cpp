 #include <iostream>
using namespace std;
void  mult1(const double arr1[], const int arr2[],double arr3[], int n);
int main()
{
   const int n = 5;
    const double arr1[n]{2.3, 1.1, 4.3, 5, 6};
    const int arr2[n]{ 1,2,3,4,5 };
    double arr3[n];
    mult1(arr1, arr2, arr3, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr3[i] << endl;
    }
}
void  mult1(const double arr1[], const int arr2[], double arr3[], int n)
{
    for (int i = 0; i < n; i++)
    {
        double mult = arr1[i] * arr2[i];
        arr3[i] = mult;
    }
    
}