#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251>nul");

    int groups;
    cout << "Брой групи:"; cin >> groups;
    int* counts = new int[groups];

    int totalStudents = 0;

    for (int i = 0; i < groups; i++) {
        cout << "Брой студенти е група " << i + 1 << ":";
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
    //Среден успех на всички студенти
    double averageGrade = 0;
    for (int g{ 0 }; g < groups; g++) {
        for (int s{ 0 }; s < counts[g]; s++) {
            averageGrade += marks[g][s];
        }
    }
    cout << "Среден успех на всички студенти: " << averageGrade / totalStudents << endl;
    //Среден успех по групи
    for (int g{ 0 }; g < groups; g++)
    {
        double average = 0;
        for (int s{ 0 }; s < counts[g]; s++) {
            average += marks[g][s];
        }
        cout << "Среден успех група " << g + 1 << ": " << average / counts[g] << endl;
    }
    //Едномерен  масив stats в heap с размер 5, чиито елементи са инициализирани с нули
    int* stats = new int[5]{};

    //Oпределете  броя на оценкте 2, 3, 4, 5 и 6 в  масива с оценки marks и ги запишете в масива stats
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
    //Изведете на екрана колко оценки от съответния тип са получени
    for (int i = 0; i < 5; i++)
    {
        cout << "Оценка " << i + 2 << " е получена " << stats[i] << " пъти." << endl;
    }
   
}

