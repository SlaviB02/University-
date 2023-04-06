#include <iostream>
using namespace std;
class Rectangle
{
    double width;
    double length;
public:
    Rectangle()
    {
        width = 5;
        length = 4;
    }
    Rectangle(double w)
    {
        width = length = w;
    }
    Rectangle(double w, double l)
    {
        width = w;
        length = l;
    }
    double get_width()
    {
        return width;
    }
    double get_length()
    {
        return length;
    }
    void set_width(double new_width)
    {
        width = new_width;
    }
    void set_length(double new_length)
    {
        length = new_length;
    }
    void show()
    {
        cout << "Rectangle width: " << width << "   Rectangle length: " << length << endl;
    }
    double area()
    {
        return width * length;
    }
    double perimeter()
    {
        return 2 * width + 2 * length;
    }
};



int main()
{
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(10, 4);
    
    r1.show();
    cout << "**********************************" << endl;
    r2.show();
    cout << "**********************************" << endl;
    r3.show();
    cout << "**********************************" << endl;
    double r3Width = r3.get_width();
    double r3Length = r3.get_length();
    r3Width++;
    r3Length++;
    r3.set_length(r3Length);
    r3.set_width(r3Width);
    r3.show();
    cout << "Rectangle perimeter: " << r3.perimeter() << endl;
    cout << "Rectangle area: " << r3.area() << endl;
    cout << "**********************************" << endl;

    Rectangle r4;
    Rectangle r5(4);
    Rectangle r6(2, 3);
    Rectangle rectangles[3]{ r4,r5,r6 };
    for (int i = 0; i < 3; i++)
    {
        rectangles[i].show();
        cout << "Rectangle perimeter: " << rectangles[i].perimeter() << endl;
        cout << "Rectangle area: " << rectangles[i].area() << endl;
        cout << endl;
    }
}
