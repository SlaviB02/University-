#include <iostream>


bool hasAlternatingBits(unsigned n)
{
	int BinaryNumber[32];
	int br = 0;
	bool flag = true;
	do
	{
		BinaryNumber[br] = n % 2;
		n = n / 2;
		br++;

	} while (n != 0);
	for (int i = 0; i < br; i++)
	{
		if (BinaryNumber[i] == BinaryNumber[i + 1])
		{
			flag = false; break;
		}
	}
	if (flag == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	int number = 0;
	std::cin >> number;
	if (number < 0)
	{
		std::cout << -1;
	}
	else
	{
		if (hasAlternatingBits(number) == true)
		{
			std::cout << "true";
		}
		else
		{
			std::cout << "false";
		}
	}
	return 0;
}