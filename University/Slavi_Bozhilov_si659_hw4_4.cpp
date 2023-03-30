#include <iostream>
using namespace std;
void Stock(double price, int percent)
{
    double changedPrice = price + ((price * percent)/100);
    cout << "Change " << price << " with " << percent << "% " << endl;
    cout << "Changed Price " << changedPrice << endl;
    cout << endl;
}
int main()
{
    double n{ 3.2 };
    Stock(n, 50);
    double stocks[] = { 1.6,2.6,3.6 };
    for (int i = 0; i < 3; i++)
    {
        Stock(stocks[i],50);
    }

}
