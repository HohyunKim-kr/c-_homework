#include<iostream>

int main()
{
	char str[9];
	int a;
	std::cin >> str >> a;

	for (size_t i = a; i < 8; i++)
	{
		str[i] = str[i + 1];
	}
	std::cout << str;

	return 0;
}