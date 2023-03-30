#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251>nul");

    int groups;
    cout << "���� �����:"; cin >> groups;
    int* counts = new int[groups];

    int totalStudents = 0;

    for (int i = 0; i < groups; i++) {
        cout << "���� �������� � ����� " << i + 1 << ":";
        cin >> counts[i];
        totalStudents += counts[i];
    }




    int** marks = new int* [groups];
    for (int i = 0; i < groups; i++) {
        marks[i] = new int[counts[i]];
    }


    srand(time(0));
    for (int g{ 0 }; g < groups; g++) {
        for (int s{ 0 }; s < counts[g]; s++) {
            marks[g][s] = rand() % 5 + 2;
        }
    }


    for (int g{ 0 }; g < groups; g++) {
        for (int s{ 0 }; s < counts[g]; s++) {
            cout << marks[g][s] << " ";
        }
        cout << endl;

    }
    //������ ����� �� ������ ��������
    double averageGrade = 0;
    for (int g{ 0 }; g < groups; g++) {
        for (int s{ 0 }; s < counts[g]; s++) {
            averageGrade += marks[g][s];
        }
    }
    cout << "������ ����� �� ������ ��������: " << averageGrade / totalStudents << endl;
    //������ ����� �� �����
    for (int g{ 0 }; g < groups; g++)
    {
        double average = 0;
        for (int s{ 0 }; s < counts[g]; s++) {
            average += marks[g][s];
        }
        cout << "������ ����� ����� " << g + 1 << ": " << average / counts[g] << endl;
    }
    //���������  ����� stats � heap � ������ 5, ����� �������� �� �������������� � ����
    int* stats = new int[5]{};

    //O���������  ���� �� ������� 2, 3, 4, 5 � 6 �  ������ � ������ marks � �� �������� � ������ stats
    int twoCounter = 0;
    int threeCounter = 0;
    int fourCounter = 0;
    int fiveCounter = 0;
    int sixCounter = 0;

    for (int g{ 0 }; g < groups; g++)
    {
        for (int s{ 0 }; s < counts[g]; s++)
        {
            switch (marks[g][s])
            {
            case 2:twoCounter++; break;
            case 3:threeCounter++; break;
            case 4:fourCounter++; break;
            case 5:fiveCounter++; break;
            case 6:sixCounter++; break;
            default:
                break;
            }
        }

    }
    stats[0] = twoCounter;
    stats[1] = threeCounter;
    stats[2] = fourCounter;
    stats[3] = fiveCounter;
    stats[4] = sixCounter;
    //�������� �� ������ ����� ������ �� ���������� ��� �� ��������
    for (int i = 0; i < 5; i++)
    {
        cout << "������ " << i + 2 << " � �������� " << stats[i] << " ����." << endl;
    }
   
}

