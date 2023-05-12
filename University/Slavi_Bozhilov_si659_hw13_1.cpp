#include <iostream>
#include<string>
#include <list>
using namespace std;
class plang {
	string name;
	double rating;
public:
	plang() = default;
	plang(string n, double r) :name(n), rating(r) {};
	string getName()
	{
		return name;
	}
	double getRating()
	{
		return rating;
	}
	string toString()
	{
		return "Name: " + name + "  Rating: "+ to_string(rating) + "\n";
	}
};
void print1(list<plang>&plangs) {
	for (auto el : plangs) {
		cout << el.toString();
	}
	cout << endl;
}
void print2(list<plang>& plangs) {
	for (auto it = plangs.begin(); it != plangs.end(); it++) {
		cout << it->toString();
	}
	cout << endl;
}
int main()
{
	list<plang>plangs{
		plang("SQL",1.48),
		plang("C++",11.96),
		plang("C#",7.43),
		plang("Fortran",0.78),
		plang("Java",12.22)
	};
	print1(plangs);
	plangs.push_front(plang("C", 13.35));
	print1(plangs);
	list<plang>::iterator it1 = plangs.begin();
	advance(it1, 2);
	plangs.insert(it1, plang("JavaScript", 2.44));
	print2(plangs);
	plangs.erase(prev(plangs.end(), 2));
	plangs.pop_front();
	print2(plangs);
	plangs.sort([](plang& p1, plang& p2) {return p1.getName() < p2.getName(); });
	print1(plangs);
	plangs.sort([](plang& p1, plang& p2) {return p1.getRating() > p2.getRating(); });
	print2(plangs);
}
