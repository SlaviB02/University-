#include <iostream>
#include<map>
#include <string>
using namespace std;

void print(map<string, double> myMap) {
    for (auto a_pair : myMap) {
        cout << a_pair.first << " *-* " << a_pair.second << endl;
    }
    cout << endl;
}
void show(map<string, double> myMap) {
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << " <-> " << it->second << endl;
    }
    cout << endl;
}
int main()
{
    system("chcp 1251>nul");
    map<string, double> students{
         {"ÑÈ457", 4.60},
         {"ÊÑÒ255", 5.15},
         {"ÑÈ488", 4.40}
    };
    pair<string, double>student1{ "ÊÑÒ444",5.00 };
    pair<string, double>student2;
    student2.first = "ÑÈ777";
    student2.second = 3.44;
    students.insert(student1);
    students.insert(student2);
    print(students);
    students.emplace("ÅË788", 5.60);
    show(students);
    string FN;
    cout << "Insert faculty number " << endl;
    cin >> FN;
    auto it = students.find(FN);
    if (it != students.end()) {
        cout << it->second << endl;
    }
    else {
        cout << FN << " íå å â ğå÷íèêà\n";
    }
    cout << endl;
    students.erase(next(students.begin(), 1));
    print(students);
    students.erase("ÑÈ777");
    show(students);

}
