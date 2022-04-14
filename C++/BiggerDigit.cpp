#include <iostream>

int main()
{
	int num = 0,last_digit=0,first_digit=0;

	std::cin >> num;

	if (num < 0 ||num>1000000000)
	{
		std::cout << -1;
	}
	else
	{

		int lgth = 1;

		int temp_lgth = num;

		while (temp_lgth / 10 > 0) {

			temp_lgth /= 10;

			lgth++;
		}

		int rev = num % 10;

		int temp_rev = num / 10;

		while (temp_rev > 0)
		{

			rev *= 10;

			rev += temp_rev % 10;

			temp_rev /= 10;
		}
		
		for (int i = 0; i <lgth/2; i++)
		{
			last_digit = rev % 10;
			
			first_digit = num % 10;

			if (last_digit > first_digit) 
			{
				std::cout << last_digit << " "; 
			}
			if (last_digit<first_digit)
			{
				std::cout << first_digit << " "; 
			}

			num = num / 10;

			rev = rev / 10;
		}
		if (lgth % 2 != 0)
		{
			last_digit = rev % 10;
				std::cout << last_digit << " ";
		}
		

	}
	return 0;


}

