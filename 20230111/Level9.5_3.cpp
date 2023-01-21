#include<iostream>

int main()
{
	char str[5][4] =
	{
		"DAA",
		"BCD",
		"EFA",
		"AAD",
		"FGE"
	};

	char c;

	std::cin >> c;

	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (str[i][j] == c)
			{
				std::cout << "(" << i << "," << j << ")" << std::endl;
			}
		}
	}

	return 0;
}