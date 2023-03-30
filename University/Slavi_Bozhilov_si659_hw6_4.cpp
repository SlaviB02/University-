#include <iostream>
using namespace std;
struct Worker
{
    string name;
    string position;
    double salary;
};
void inputWorker(Worker& w) 
{
    cout << "Name:"<< endl; cin >> w.name;
    cout << "Position:" << endl; cin >> w.position;
    cout << "Salary:" << endl; cin >> w.salary;
}
void inputWorker(Worker* w)
{
    cout << "Name:" << endl; cin >> w->name;
    cout << "Position:" << endl; cin >> w->position;
    cout << "Salary:" << endl; cin >> w->salary;
}
void printWorker(Worker w)
{
    cout << "Name=" << w.name << "   Position=" << w.position << "   Salary=" << w.salary <<"lv"<< endl;
}
void printWorkers(Worker w[], int count)
{
    for (int i{ 0 }; i < count; i++) 
    {
        cout << "Name=" << w[i].name << "   Position=" << w[i].position << "   Salary=" << w[i].salary <<"lv"<< endl;
    }
    
}
void printWorkersGivenPosition(Worker w[], int count, string position)
{
    int n = 0;
    for (int i{ 0 }; i < count; i++)
    {
        if (w[i].position == position)
        {
            cout << "Name=" << w[i].name << "   Position=" << w[i].position << "   Salary=" << w[i].salary <<"lv"<< endl;
            n++;
        }  
    }
    if (n == 0)
    {
        cout << "No Workers with given position" << endl;
    }
}
int main()
{
    Worker worker1;
    inputWorker(worker1);
    printWorker(worker1);
    cout << "-----------------------" << endl;
    Worker worker2 = { "Ivan","Teacher",1500 };
    printWorker(worker2);
    cout << "-----------------------" << endl;
    Worker* pw1 = new Worker;
    inputWorker(pw1);
    printWorker(*pw1);
    cout << "-----------------------" << endl;
    Worker* pw2 = new Worker{ "Anton","Racer",5000 };
    printWorker(*pw2);
    cout << "-----------------------" << endl;
    Worker workers[4] =
    {
        { "Petar","Doctor",3000 },
        { "Kristian","Janitor",2000 },
        { "Aleksandar","Policeman",1700 },
        { "Hristo","Fireman",2500 }
    };
    printWorkers(workers, 4);
    cout << "-----------------------" << endl;
    double average=0;
    for (auto w : workers) {
        average += w.salary;
    }
    cout << "Total price:" << average/4 << endl;
    string position;
    cout << "-----------------------" << endl;
    cout << "Insert position for reference:" << endl;
    cin >> position;
    cout << "-----------------------" << endl;
    printWorkersGivenPosition(workers, 4, position);
}
