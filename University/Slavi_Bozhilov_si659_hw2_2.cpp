#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;



int main()
{
    system("chcp 1251>nul");

    string names[]{ "Ана", "Петър", "Димо", "Стоян", "Асен", "Лиляна", "Димитър",
                                                         "Мирослав", "Катя", "Денислав" };
    const int COUNT = sizeof names / sizeof * names;
    for (int i = 0; i < COUNT; i++)
    {
        cout << *(names + i) << " ";
    }
    cout << endl;
    random_shuffle(names, names + COUNT);
    for (string* p = names; p < names + COUNT; p++)
    {
        cout << *p << " ";
    }
    cout << endl;
    random_shuffle(names, names + COUNT - 1);
    for (string element : names) {
        cout << element << " ";
    }
    cout << endl;
    random_shuffle(names, names + COUNT - 2);
    for (string element : names) {
        cout << element << " ";
    }
    cout << endl;
    string for_awarding[]{ *(names+COUNT-1),*(names+COUNT-2),*(names+COUNT-3) };
    for (string element : for_awarding) {
        cout << element << " ";
    }
    cout << endl;
}

