#include <iostream>
using namespace std;
void AreaOfFloor(double a = 4, double b = 2.25)
{
    double area = a * b;
    cout << "Area of Floor: " << area << endl;
}

int main()
{
    //2 �������� �� ������������
    AreaOfFloor();
    //1 ������� � ������� ����, ������ �� ������������
    AreaOfFloor(8);
    //������ �������� �� �������� ����
    AreaOfFloor(8, 4);
}
