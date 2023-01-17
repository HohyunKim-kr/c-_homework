#include<iostream>
int isExist(char _str[5],char _s);

int main()
{
	char str[5] = "MTKC";

	char s;
	std::cin >> s;

	if (isExist(str, s) == 1)
	{
		std::cout << "발견";
	}
	else
	{
		std::cout << "미발견";
	}

	return 0;
}

int isExist(char _str[5], char _s)
{
	for (size_t i = 0; i < 5; i++)
	{
		if (_str[i] == _s)
		{
			return 1;
		}
	}
}
