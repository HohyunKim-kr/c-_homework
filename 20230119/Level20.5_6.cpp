#include<iostream>

int main()
{
	int arr[7];

	for (size_t i = 0; i < 7; i++)
	{
		std::cin >> arr[i];
	}

	for (size_t i = 4; i > 0; i--)
	{
		for (size_t j = 0; j <= 7 - i; j++)
		{
			std::cout << arr[j];
		}
		std::cout << std::endl;
	}

	return 0;
}