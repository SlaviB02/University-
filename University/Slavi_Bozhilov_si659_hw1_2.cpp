#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    int nums[5] = { 1,3,5,7,9 };
    int* p_first = nums;
    int* p_last = nums + 4;
    cout <<"������� ����� ��������� � ������ ��������= "<< p_last - p_first << endl;
    cout << "����� �������= " << *p_first << " �������� �������= " << *p_last << endl;
    int* p = p_first + 2;
    cout << "����� �������= " << *(p-1) << endl;
    p = p_last - 1;
    cout << "������������ �������= " << *(p) << endl;

}
