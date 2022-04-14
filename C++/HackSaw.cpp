#include <iostream>
const int N = 100;
int hacksaw(int arr[], int size, int i, int br)
{

	if (i == size-1)
	{
		return 1;
	}
	if (i == 0)
	{
		if (arr[i] > arr[i + 1])
		{
			br = 1;
			return	hacksaw(arr, size, i + 1, br);
		}
		else
		{
			br = 2;
			return	hacksaw(arr, size, i + 1, br);
		}
	}
	if (br == 2)
	{
		if (arr[i] > arr[i + 1])
		{
			br = 1;
			return	hacksaw(arr, size, i + 1, br);
		}
		else
		{
			return 0;
		}
	}
	if (br == 1)
	{
		if (arr[i] < arr[i + 1])
		{
			br = 2;
			return hacksaw(arr, size, i + 1, br);
		}
		else
		{
			return 0;
		}
	}

}

int main()
{
	int arr[N], n = 0, i = 0, br = 0;
	std::cin >> n;
	if (n < 3 || n>1000)
	{
		std::cout << "-1";
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			std::cin >> arr[i];
		}

		if (hacksaw(arr, n, i, br) == 1)
		{
			std::cout << "Yes";
		}
		if (hacksaw(arr, n, i, br) == 0)
		{
			std::cout << "No";
		}

	}
	return 0;
}

