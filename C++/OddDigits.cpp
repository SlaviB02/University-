#include <iostream>

int main()
{
	int num = 0, digit = 0;
	
	std::cin >> num;
	
	if (num < 0) 
	{
		std::cout << "-1";
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
		int br = 0;
			for (int i = 0; i < lgth; i++)
			{
				digit = rev % 10;
				
				rev = rev / 10;
				
				if (digit % 2 != 0)
				{
					std::cout << digit; br++;
				}
			}

			if (br == 0)
			{
				std::cout << "0";
			}
	}
		return 0;
	

}

