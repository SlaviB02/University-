#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251>nul");
    int a = 20;
    double b = 2.56;
    char c = '@';
    int* p_a = &a;
    double* p_b = &b;
    char* p_c = &c;
    cout << "p_a= " << p_a << " size of p_a= " << sizeof(p_a) << "B"<<" Сочена стойност от p_a= " << *p_a << " size of *p_a= " << sizeof(*p_a) <<"B"<< endl;
    cout << "p_b= " << p_b << " size of p_b= " << sizeof(p_b) << "B"<<" Сочена стойност от p_b= " << *p_b << " size of *p_b= " << sizeof(*p_b) << "B" << endl;
    cout << "p_c= " << static_cast<void*>(p_c) << " size of p_c= " << sizeof(p_c) << "B"<<" Сочена стойност от p_c= " << *p_c << " size of *p_c= " << sizeof(*p_c) << "B" << endl;
}


