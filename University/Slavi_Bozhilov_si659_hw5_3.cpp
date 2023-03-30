#include <iostream>
using namespace std;
bool  hasSearchedSymbol(char* begin, char searchedSymbol);
int main()
{
    char arr[5] = { 'C','H','A','R','\0'};
    char searchedSymbol = 'A';
    if (hasSearchedSymbol(arr, searchedSymbol) == true)
    {
        cout << "Array has element" << endl;
    }
    else
    {
        cout << "Array doesn't have element" << endl;
    }
    
}
bool  hasSearchedSymbol(char* begin, char searchedSymbol)
{
    for (char* p = begin; *p !='\0'; p++)
    {
        if (*p == searchedSymbol)
        {
            return true;
        }
     }
    
    return false;
}
