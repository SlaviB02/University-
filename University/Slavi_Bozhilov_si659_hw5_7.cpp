#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    double (*fp)(double);
    int choice;
    cout << "1:sqrt\n2:cbrt\n3:exp\n4:log\n" << endl;
    cout << "Make a choice" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:fp = sqrt; cout << fp(10) << endl; break;
    case 2:fp = cbrt; cout << fp(10) << endl; break;
    case 3:fp = exp; cout << fp(10) << endl; break;
    case 4:fp = log; cout << fp(10) << endl; break;
    default:cout << "Invalid choice" << endl;
        break;
    }
    //Дава грешка и не се изпълнява програмата, затова сложих изкарването на функцията в switch
    //Using uninitialized memory 'fp'
    //cout << fp(10) << endl;
}
