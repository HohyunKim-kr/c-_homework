#include<iostream>

int main()
{
	char str[3][7] = {};

	char a, b;

	std::cin >> a >> b;

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			str[i][j] = a;
		}
		for (size_t j = 4; j < 7; j++)
		{
			str[i][j] = b;
		}
	}

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 7; j++)
		{
			std::cout << str[i][j];
		}
		std::cout << std::endl;
	}

	return 0;
}