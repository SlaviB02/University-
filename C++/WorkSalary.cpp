/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Slavi Bozhilov
* @idnumber 5MI0600037
* @task 3
* @compiler VC
*
*/
#include <iostream>

int main()
{
    int n = 0, salary = 0;
    
    char web;
    bool flag = true;
   
    std::cin >> n;
   
    if (n < 1 || n>10)
    {
        std::cout << -1 << "\n";
    }
   
    std::cin >> salary;
    
    if (salary < 700 || salary>1500)
    {
        std::cout << -1 << "\n";
    }
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> web;
        if (web != 'f' && web != 'F' && web != 'i' && web != 'I' && web != 'R' && web != 'r' && web != 'd' && web != 'D')
        {
            std::cout << -1;
        }
        if (web == 'f' || web == 'F')
        {
            salary = salary - 150;
        }
        if (web == 'i' || web == 'I')
        {
            salary = salary - 100;
        }
        if (web == 'R' || web == 'r')
        {
            salary = salary - 50;
        }
        if (salary <= 0)
        {
            std::cout << "You have lost your salary." << "\n";
            flag = false;
            break;
           
        }
        
    }
    if (flag == true)
    {
        std::cout << salary;
    }
    return 0;
}
