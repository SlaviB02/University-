#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
int* getMarks(int n);
int main()
{
    system("chcp 1251>nul");
    int n;
    cout << "Insert number of elements " << endl;
    cin >> n;
    int* grades = getMarks(n);
    for (int i = 0; i < n; i++)
    {
        cout << grades[i] << " ";
    }
    cout << endl;

}
int* getMarks(int n)
{
    int* grades = new int[n];
    srand(time(0));
    for (int i{ 0 }; i < n; i++) {
        grades[i] = rand() % 5 + 2;
    }
    return grades;
}
