#include<iostream>

int main()
{
	int arr[6][3] = { 0 };

	int a, b;

	std::cin >> a >> b;

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			arr[i][j] = a;
			std::cout << arr[i][j];
		}
		std::cout << std::endl;
	}
	for (size_t i = 3; i < 6; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			arr[i][j] = b;
			std::cout << arr[i][j];
		}
		std::cout << std::endl;
	}




	return 0;

}