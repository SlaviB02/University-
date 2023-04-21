#pragma once
class Person
{
	int year;
	char gender;
	double weight;
	double height;
	int getCurrentAge(int);
public:
	Person();
	void input();
	void setWeight(double w);
	double getWeight();
	void show();
	void bmi();
	double getOptimalWeightML(int);
	double getOptimalWeightWHO();
};

