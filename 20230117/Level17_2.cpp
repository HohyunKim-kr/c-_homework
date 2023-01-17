#include<iostream>

int main()
{
	int arr[3][3] =
	{
		{3,5,9},
		{4,2,1},
		{1,1,5}
	};
	int arr2[3][3];
	int sum = 0;

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cin >> arr2[i][j];
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (arr2[i][j] == 1)
			{
				sum += arr[i][j];
			}
		}
	}
	std::cout << sum;
	return 0;
}