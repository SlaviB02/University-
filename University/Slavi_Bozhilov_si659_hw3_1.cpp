#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main()
{
    system("chcp 1251>nul");
    const int ROWS{ 3 };
    const int COLS{ 4 };
    int numbers[ROWS][COLS]{};
    srand(time(0));
    for (auto& row : numbers)
    {
        for (auto& element : row) {
            element = rand() % 90 + 10;
        }
    }
    for (auto& row : numbers)
    {
        for (auto element : row) 
        {
            cout << element << " ";
        }
        cout << endl;
    }
    
    int max = 0;
    int i = 0;
    int maxRow = 0;
    for (auto& row : numbers)
    {
        int sum = 0;
        for (auto element : row)
        {
            sum += element;
        }
        cout << "Row: " << i << " Sum: " << sum << endl;
        if (sum > max)
        {
            max = sum;
            maxRow = i;
        }
        i++;
    }
    cout << "MaxRow: " << maxRow << " MaxSum: " << max << endl;
    
   
}


