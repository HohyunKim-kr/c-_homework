#include<iostream>

int main()
{
	char str[3][11] = {};

	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> str[i];
	}

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 11; j++)
		{
			if (str[i][j] == '\0')
			{
				std::cout << str[i][j - 1];
				break;
			}	
		}
	}
	return 0;
}