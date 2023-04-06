#include <iostream>
using namespace std;
struct Rectangle 
{
    double width;
    double length;
};
void show(Rectangle r)
{
    cout << "Rectangle width: " << r.width <<"   Rectangle length: "<<r.length<< endl;
}
double area(Rectangle r)
{
    return r.width * r.length;
}
double perimeter(Rectangle r)
{
    return 2 * r.width + 2 * r.length;
}
int main()
{
    Rectangle rectangles[4] =
    {
        {5,4},
        {2.5,5},
        {1,2.5},
        {8,6.4}
    };
    for (int i = 0; i < 4; i++)
    {
        show(rectangles[i]);
        cout << "Rectangle perimeter: " << perimeter(rectangles[i]) << endl;
        cout << "Rectangle area: " << area(rectangles[i]) << endl;
        cout << endl;
    }
}
