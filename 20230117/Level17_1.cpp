#include<iostream>

int main()
{
	char str[3][5] =
	{
		"ATKB",
		"CZFD",
		"HGEI"
	};
	char a;
	std::cin >> a;

	int y, x;
	std::cin >> y >> x;


	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (str[i][j] == a)
			{
				std::cout << str[i + y][j + x];
				return 0;
			}
		}
	}

	return 0;
}