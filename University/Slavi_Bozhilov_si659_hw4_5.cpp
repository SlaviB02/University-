#include <iostream>
#include<cmath>
using namespace std;
void Means(double x, double y, double& aMean, double& gMean);
int main()
{
    system("chcp 1251>nul");
    double a, b;
    cout << "������ ������ ����������� �����" << endl;
    cin >> a;
    cout << "������ ������ ����������� �����" << endl;
    cin >> b;
    double aMean, gMean;
    Means(a, b, aMean, gMean);
    cout << "������ ����������� " << aMean << endl;
    cout << "������ ����������� " << gMean << endl;
}
void Means(double x, double y, double& aMean, double& gMean)
{
    aMean = (x + y) / 2;
    gMean = sqrt(x * y);
}
