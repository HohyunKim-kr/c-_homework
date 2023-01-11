#include<iostream>

void checkChar(char _str);

int main()
{
	char str[5];

	for (int i = 0; i < 5; i++)
	{
		std::cin >> str[i];
		checkChar(str[i]);
	}
	return 0;
}

void checkChar(char _str)
{
	if (_str >= 'A' && _str <= 'Z')
	{
		std::cout << "´ë";
	}
	if (_str >= 'a' && _str <= 'z')
	{
		std::cout << "¼Ò";
	}
}