#include <iostream>
#include<string>
using namespace std;
class Room 
{
	double length;
	double width;
public:
	Room() {
		length = 4;
		width = 4;
	};
	Room(double l, double w)
	{
		length = l;
		width = w;
	}
	void setLength(double l)
	{
		length = l;
	}
	void setWidth(double w)
	{
		width = w;
	}
	double getLength()
	{
		return length;
	}
	double getWidth()
	{
		return width;
	}
	double area()
	{
		return length * width;
	}
	virtual void show()
	{
		cout << "Room with " << length << " length and " << width << " width and area: " << this->area() << " ";
	}
};
class Office:public Room
{
	string businessName;
public:
	Office():Room()
	{
		businessName = "Nova";
	};
	Office(double l, double w, string name) :Room(l, w)
	{
		businessName = name;
	}
	void setName(string name)
	{
		businessName = name;
	}
	string getName()
	{
		return businessName;
	}
	void show()override
	{
		Room::show();
		cout << "  Name of business: " << businessName;
	}
};
class HospiceRoom :public Room
{
	int personCount;
public:
	HospiceRoom():Room() 
	{
		personCount = 1;
	};
	HospiceRoom(double l, double w, int count) :Room(l, w)
	{
		personCount = count;
	}
	void setPersonCount(int count)
	{
		personCount = count;
	}
	int getPersonCount()
	{
		return personCount;
	}
	void show()override
	{
		Room::show();
		cout << "  People in room: " << personCount;
	}
	double areaPerPerson()
	{
		return this->area() / personCount;
	}
};
int main()
{
	Room room;
	room.show();
	cout << endl;
	room.setLength(6);
	room.setWidth(6);
	room.show();
	cout << endl;

	cout << "**************************" << endl;
	Office office;
	office.show();
	cout << endl;
	office.setName("BTV");
	office.show();
	cout << endl;
	cout << "**************************" << endl;
	HospiceRoom hospiceRoom;
	hospiceRoom.show();
	cout << endl;
	hospiceRoom.setPersonCount(10);
	hospiceRoom.show();
	cout << endl;
	cout <<"Area per person:"<< hospiceRoom.areaPerPerson() << endl;
	cout << "**************************" << endl;
	Room* rooms[6] =
	{
	new Room(),
	new Room(10,10),
	new Office(),
	new Office(10,10,"KFC"),
	new HospiceRoom(),
	new HospiceRoom(10,10,5)
	};
	for (int i = 0; i < 6; i++)
	{
		rooms[i]->show();
		cout << endl;
		HospiceRoom* hs = dynamic_cast<HospiceRoom*>(rooms[i]);
		if (hs != nullptr)
		{
			cout << "Area per person:" << hs->areaPerPerson() << endl;
		}
	}

}
