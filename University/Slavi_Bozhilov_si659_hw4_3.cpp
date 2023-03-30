#include <iostream>
using namespace std;
int calc(int a, int b, char op);
int main()
{
    int x{ 10 };
    int y{ 5 };
    cout << "x+y= " << calc(x, y, '+')<<endl;
    cout << "x-y= " << calc(x, y, '-')<<endl;
    cout << "x*y= " << calc(x, y, '*')<<endl;
    cout << "x/y= " << calc(x, y, '/')<<endl;
    cout << "x%y= " << calc(x, y, '%')<<endl;
}
int calc(int a, int b, char  op)
{
    switch (op)
    {
    case'+':return a + b;
    case'-':return a - b;
    case'*':return a * b;
    case'/':return a / b;
    case'%':return a % b;
    }
}

