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
    string menu{ "1.Въведи данните\n2.Покажи данните\n3.Промени теглото\n4.Изчисли ИТМ\n5.Изчисли оптимално тегло по МL\n6.Изчисли оптимално тегло по WHO\n7.Изход\n" };
    do {
        
        cout << menu << endl;

        cout << "Избери опция 1-7: ";
        cin >> choise;

        switch (choise) {
        case 1:
            person.input();
            break;
        case 2:
            person.show();
            break;
        case 3:
            cout << "Въведи тегло в кг за промяна" << endl;
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
            cout << "Довиждане" << endl;
            break;
        default:
            cout << "Невалиден избор" << endl;
            break;
        }
        
    } while (choise >= 1 && choise <= 6);
    
   
}
