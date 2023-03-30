#include <iostream>
#include<cmath>
using namespace std;
void roots(double number)
{
    cout << "Square root of " << number << " " << sqrt(number) << endl;
    cout << "Cubic root of " << number << " " << cbrt(number) << endl;
    cout << "Fourth root of " << number << " " << sqrt(sqrt(number)) << endl;
    cout << endl;
}
int main()
{
   
    const double n{ 81 };
    roots(n);
    double num{ 225 };
    roots(num);
    roots(num + 400);
}

