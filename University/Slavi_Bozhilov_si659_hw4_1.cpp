#include <iostream>
using namespace std;
bool isEven(int number)
{
    if(number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cout << "Insert number" << endl;
    cin >> n;
    const int number{ 11 };
    if (isEven(n) == true)
    {
        cout <<n<<" is even" << endl;
    }
    else
    {
        cout <<n<<" is odd" << endl;
    }
    if (isEven(number) == true)
    {
        cout <<number<<" is even" << endl;
    }
    else
    {
        cout <<number<<" is odd" << endl;
    }
}

