#include<iostream>

void isExist(char _str[][4], char _a, char _b);


int main()
{
	char str[2][4] =
	{
		"GKT",
		"PAC"
	};
	char a, b;

	std::cin >> a >> b;

	isExist(str, a, b);

	return 0;
}

void isExist(char _str[][4], char _a, char _b)
{
	bool countA = false;
	bool countB = false;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (_str[i][j] == _a)
			{
				countA = true;
			}
			if(_str[i][j] == _b)
			{
				countB = true;
			}
		}
	}

	if (countA == true && countB == true)
	{
		std::cout << "대발견";
	}
	else if (countA == true || countB == true)
	{
		std::cout << "중발견";
	}
	else
	{
		std::cout << "미발견";
	}

}
