#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    int nums[5] = { 1,3,5,7,9 };
    int* p_first = nums;
    int* p_last = nums + 4;
    cout <<"Разлика между последния и първия указател= "<< p_last - p_first << endl;
    cout << "Първи елемент= " << *p_first << " Последен елемент= " << *p_last << endl;
    int* p = p_first + 2;
    cout << "Втори елемент= " << *(p-1) << endl;
    p = p_last - 1;
    cout << "Предпоследен елемент= " << *(p) << endl;

}
