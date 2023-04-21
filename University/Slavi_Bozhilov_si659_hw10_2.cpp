#include <iostream>
#include<string>
using namespace std;

class Country 
{
    string name;
    double area;
    int population;
public:
    Country()
    {
        name = "Bulgaria";
        area = 4456665;
        population = 7000000;
    }
    Country(string n, double a, int p)
    {
        name = n;
        area = a;
        population = p;
    }
    string getName()
    {
        return name;
    }
    double getArea()
    {
        return area;
    }
    int getPopulation()
    {
        return population;
    }
    void setName(string n)
    {
        name = n;
    }
    void setArea(double a)
    {
        area = a;
    }
    void setPopulation(int p)
    {
        population = p;
    }
    bool isBigger(int value)
    {
        if (population > value)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    double populationDensity()
    {
        return population / area;
    }
    void print()
    {
        cout << "Name of country: " << name << endl;
        cout << "Area of country: " << area << endl;
        cout << "Population of country: " << population << endl;
    }
};
class ÎlympicCountry :public Country
{
    int athletes;
public:
    ÎlympicCountry() :Country()
    {
        athletes = 12;
    }
    ÎlympicCountry(string n, double a, int p, int ath) :Country(n, a, p)
    {
        athletes = ath;
    }
    int getAthletes()
    {
        return athletes;
    }
    void setAthletes(int ath)
    {
        athletes = ath;
    }
    double participantsPerPerson()
    {
        double participants = athletes / (double)getPopulation();
        return participants;
    }
    void print()
    {
        Country::print();
        cout << "Atheletes in the Olympics: " << athletes << endl;
    }
};
int main()
{
    ÎlympicCountry country("Bulgaira",444444,7000000,2000);
    if (country.isBigger(45500) == false)
    {
        cout <<"Luxenburg is bigger than "<<country.getName() << endl;
    }
    else
    {
        cout << country.getName() << " is bigger than Luxenburg" << endl;
    }
    cout << "Country Population Density: " << country.populationDensity() << endl;
    cout << "Country Participants Per Person: " << country.participantsPerPerson() << endl;
    cout << "*******************************************************" << endl;
    country.print();
}
