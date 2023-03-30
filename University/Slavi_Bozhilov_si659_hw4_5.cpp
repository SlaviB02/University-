#include <iostream>
#include<cmath>
using namespace std;
void Means(double x, double y, double& aMean, double& gMean);
int main()
{
    system("chcp 1251>nul");
    double a, b;
    cout << "Въведи реално положително число" << endl;
    cin >> a;
    cout << "Въведи реално положително число" << endl;
    cin >> b;
    double aMean, gMean;
    Means(a, b, aMean, gMean);
    cout << "Средно аритметично " << aMean << endl;
    cout << "Средно геометрично " << gMean << endl;
}
void Means(double x, double y, double& aMean, double& gMean)
{
    aMean = (x + y) / 2;
    gMean = sqrt(x * y);
}
