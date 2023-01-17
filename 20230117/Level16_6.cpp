#include<iostream>

void isExist(char arr[][11]);


int main()
{
	char str[3][11] = {};


	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> str[i];
	}
	isExist(str);


	return 0;
}

void isExist(char arr[][11])
{
	bool check = false;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (arr[i][j] == 'M')
			{
				check = true;
			}
		}
	}
	std::cout << "M이 존재합니다";
}