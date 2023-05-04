#include <iostream>
#include<vector>
#include<string>
using namespace std;
class Traveler {
	string name;
	int age;
	vector<string> places;
public:
	Traveler() =default;
	Traveler(string n, int a, vector<string>p) :name(n), age(a), places(p) {};
	int getAge()
	{
		return age;
	}
	void setAge(int newAge)
	{
		age = newAge;
	}
	string getName()
	{
		return name;
	}
	void setName(string newName)
	{
		name = newName;
	}
	vector<string> getPlaces() const 
	{
		return places;
	}
	void setPlaces(vector<string> _places) 
	{
		places = _places;
	}
	string getPlace(int index) const
	{
		if (index<0 || index>places.size())
		{
			cout << "Invalid index" << endl;
			return "";
		}
		return places[index];
	}
	void setPlace(int index, string place)
	{
		if (index<0 || index>places.size())
		{
			cout << "Invalid index" << endl;
		}
		else
		{
			places[index] = place;
		}
	}
   void	print() const
	{
	   cout << "Traveler name: " << name << endl;
	   cout << "Travler age: " << age << endl;
	   cout << "Places visited: " << endl;
	   for (int i = 0; i < places.size(); i++)
	   {
		   cout << places[i] << endl;
	   }
	   cout << endl;
	}
   void addPlace(string place)
   {
	   places.push_back(place);
   }
   int countVizitedCountries() const
   {
	   return places.size();
   }
};
int main()
{
	Traveler t1;
	Traveler t2("Ivan", 25, vector<string>{ "Bulgaria", "Romania", "Turkey" });
	t1.setName("Petur");
	t1.setAge(40);
	t1.setPlaces(vector<string>{ "USA", "Japan", "England" });
	t1.print();
	t1.setPlace(1, "Bulgaria");
	t1.print();
	cout << "*****************************" << endl;
	vector<string>t1_places = t1.getPlaces();
	cout << "Traveler places: " << endl;
	for (int i = 0; i < t1_places.size(); i++)
	{
		cout << t1_places[i] << endl;
	}
	cout << "Get traveler place at 1 index" << endl;
	cout << t1.getPlace(1) << endl;
	cout << "Visited places: " << t1.countVizitedCountries() << endl;
	cout << "*****************************" << endl;
	t2.print();
	cout << "Insert place to add to list of places" << endl;
	string place;
	cin >> place;
	t2.addPlace(place);
	t2.print();
	cout << "Visited places: " << t2.countVizitedCountries() << endl;
}
