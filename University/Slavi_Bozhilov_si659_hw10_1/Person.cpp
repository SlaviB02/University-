#include "Person.h"
#include<iostream>
#include<cmath>
Person::Person()
{
	year = 2000;
	gender = 'm';
	weight = 80;
	height = 1.76;
}
void Person::input()
{
	std::cout << "Insert person year of birth " << std::endl;
	std::cin >> year;
	std::cout << "Insert person gender(m/f) " << std::endl;
	std::cin >> gender;
	std::cout << "Insert person weight(kg) " << std::endl;
	std::cin >> weight;
	std::cout << "Insert person height(m) " << std::endl;
	std::cin >> height;
	std::cout << std::endl;
}
void Person::setWeight(double w)
{
	weight = w;
}
double Person::getWeight()
{
	return weight;
}
void Person::show()
{
	std::cout << "Year of birth: " <<year<< std::endl;
	std::cout << "Gender: " << gender<< std::endl;
	std::cout << "Weight: " << weight <<" kg" << std::endl;
	std::cout << "Height: " << height <<" m" << std::endl;
	std::cout << std::endl;
}
int Person::getCurrentAge(int currentYear)
{
	return currentYear - year;
}
void Person::bmi()
{
	double bmi = weight / (height * height);
	if (bmi < 18.5)
	{
		std::cout << "UnderWeight" << std::endl;
	}
	else if (bmi > 18.5 && bmi < 25)
	{
		std::cout << "Normal Weight" << std::endl;
	}
	else if (bmi > 25 && bmi < 30)
	{
		std::cout << "OverWeight" << std::endl;
	}
	else if (bmi > 30)
	{
		std::cout << "Obesity" << std::endl;
	}	
	std::cout << std::endl;
}
double Person::getOptimalWeightML(int currentYear)
{
	int age = getCurrentAge(currentYear);
	double idealWeight = 50 + 0.75 * ((height*100) - 150) + (age - 20) / 4;
	return idealWeight;
}
double Person::getOptimalWeightWHO()
{
	double idealWeight=0;
	if (gender == 'm')
	{
		idealWeight = pow(height,2) * 21.745 + 2.2;
	}
	else if (gender == 'f')
	{
		idealWeight = pow(height, 2)* 21.745 - 2.2;
	}
	return idealWeight;
}