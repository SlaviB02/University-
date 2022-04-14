#include <iostream>

int main()
{
	int num = 0;

	std::cin >> num;

	if (num < 1 || num>9)
	{
		std::cout << "-1" << "\n";
	}
	else
	{

		std::cout << "\n";


		for (int i = 1; i < num; i++)
		{

			for (int j = 1; j <= num; j++)
			{
				if (j >= i)
				{
					std::cout << j;
				}
				else
				{
					std::cout << " ";
				}
			}

			std::cout << "\n";
		}
		
		for (int i = 1; i <= num; i++)
		{
			int number = num;
			for (int g = 1; g < num; g++)
			{
				std::cout << " ";
			}
			for (int j = i; j > 0; j--)
			{
				std::cout << number;

				number--;
			}

			std::cout << "\n";

		}
	}
	return 0;
}