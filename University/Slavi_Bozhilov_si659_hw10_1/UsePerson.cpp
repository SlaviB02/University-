#include <iostream>
#include "Person.h"
#include<string>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    Person person;
    int weightToChange = 0;
    int choise = 0;
    string menu{ "1.������ �������\n2.������ �������\n3.������� �������\n4.������� ���\n5.������� ��������� ����� �� �L\n6.������� ��������� ����� �� WHO\n7.�����\n" };
    do {
        
        cout << menu << endl;

        cout << "������ ����� 1-7: ";
        cin >> choise;

        switch (choise) {
        case 1:
            person.input();
            break;
        case 2:
            person.show();
            break;
        case 3:
            cout << "������ ����� � �� �� �������" << endl;
            cin >> weightToChange;
            person.setWeight(weightToChange);
            break;
        case 4:
            person.bmi();
             break;
        case 5:
            cout << person.getOptimalWeightML(2023) << endl;
            break;
        case 6:
            cout << person.getOptimalWeightWHO() << endl;
            break;
        case 7:
            cout << "���������" << endl;
            break;
        default:
            cout << "��������� �����" << endl;
            break;
        }
        
    } while (choise >= 1 && choise <= 6);
    
   
}
