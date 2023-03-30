#include <iostream>
using namespace std;
void AreaOfFloor(double a = 4, double b = 2.25)
{
    double area = a * b;
    cout << "Area of Floor: " << area << endl;
}

int main()
{
    //2 елемента по подразбиране
    AreaOfFloor();
    //1 елемент е зададен явно, втория по подразбиране
    AreaOfFloor(8);
    //Всички елементи са зададени явно
    AreaOfFloor(8, 4);
}
