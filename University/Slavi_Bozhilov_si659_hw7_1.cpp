#include <iostream>
using namespace std;
struct  meal {
    string name;    
    double price;   
    meal* next;
};
void show(meal* first) {
    meal* current = first;
    int index = 1;
    cout << "Вашата поръчка" << endl;
    while (current != nullptr) {
        cout << index++<< "." << current->name << " " << current->price << "лв" << endl;;
        current = current->next;
    }
}
int getCount(meal* first)
{
    int count=0;
    meal* current = first;
    while (current != nullptr)
    {
        count++;
        current = current->next;
    }
    return count;
}
int main()
{
    system("chcp 1251>nul");
    meal* m1 = new meal{"Салата",6.2, nullptr};
    meal* m2 = new meal{ "Супа",2.8, nullptr };
    meal* m3 = new meal{ "Скара",7.5, nullptr };

    meal* head = m1; 
    m1->next = m2;
    m2->next = m3;
    show(head);
    cout << endl;
    cout << "****************" << endl;
    cout << "Добавяне на питие в началото" << endl;
    meal* newMeal1 = new meal{ "Фанта", 2.6, nullptr };
    newMeal1->next = m1;
    head = newMeal1;
    show(head);
    cout << endl;
    cout << "****************" << endl;
    int currentCount = getCount(head);
    cout << "Добавяне на ястие в средата Позиция  2 - " << currentCount << ":" << endl;
    int position = 0;
    cin >> position;
    meal* afterP;
    meal* beforeP = head;
    for (int i = 0; i < position-2; i++)
    {
        beforeP = beforeP->next;
    }
    afterP = beforeP->next;
    meal* newMeal2 = new meal{ "Луканка", 9.7, afterP };
    beforeP->next = newMeal2;
    show(head);
    cout << endl;
    cout << "****************" << endl;
    cout << "Добавяне на десерт в края" << endl;
    meal* newMeal3 = new meal{ "Сладолед", 5.6, nullptr };
    meal* currentLast = head;
    while (currentLast->next != nullptr)
    {
        currentLast = currentLast->next;
    }
    currentLast->next = newMeal3;
    show(head);
    cout << endl;
    double sum = 0;
    meal* current = head;
    while (current != nullptr)
    {
        sum += current->price;
        current = current->next;
    }
    cout << "Обща сума на поръчката:" << sum << "лв" << endl;
}
