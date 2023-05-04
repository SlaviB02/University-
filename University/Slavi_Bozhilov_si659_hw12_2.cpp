#include <iostream>
using namespace std;
template<typename T1,typename T2>
class example {
    T1 x;
    T2 y;
public:
    example(T1 _x, T2 _y) :x(_x), y(_y) {};
    T1 getX()
    {
        return x;
    }
    T2 getY()
    {
        return y;
    }
    void showSizes()
    {
        cout << "X size: " << sizeof(x) << " Y size: " << sizeof(y) << " Total size: " << sizeof(*this)<<endl;
    }
};
int main()
{
    example<int, double>ex1(4, 6.44);
    example<int, char>ex2(4, '@');
    example<int, int>ex3(4, 6);
    cout << "X= " << ex1.getX() << " Y= " << ex1.getY() << endl;
    ex1.showSizes();
    cout << "X= " << ex2.getX() << " Y= " << ex2.getY() << endl;
    ex2.showSizes();
    cout << "X= " << ex3.getX() << " Y= " << ex3.getY() << endl;
    ex3.showSizes();

}
