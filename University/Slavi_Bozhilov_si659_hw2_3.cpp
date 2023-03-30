#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    system("chcp 1251>nul");
    int countMarks;
    cout << "Размер на marks= " << endl;
    cin >> countMarks;
    double* marks = new double[countMarks];
    for (int i = 0; i < countMarks; i++)
    {
        cin >> marks[i];
    }
    sort(marks, marks + countMarks);
    int n;
    cout << "Размер на top_n_marks= " << endl;
    cin >> n;
    double* top_n_marks = new double[n];
    for (int i = 0; i < n; i++)
    {
        top_n_marks[i] = *(marks + countMarks - i-1);
    }
    for (int i = 0; i < n; i++)
    {
        cout << top_n_marks[i] << " ";
    }
    cout << endl;
    int m;
    cout << "Размер на bottom_m_marks= " << endl;
    cin >> m;
    double* bottom_m_marks = new double[m];
    for (int i = 0; i < m; i++)
    {
        bottom_m_marks[i] = *(marks + i);
    }
    for (int i = 0; i < m; i++)
    {
        cout << bottom_m_marks[i] << " ";
    }
    cout << endl;
    delete[]marks;
    delete[]top_n_marks;
    delete[]bottom_m_marks;
}

