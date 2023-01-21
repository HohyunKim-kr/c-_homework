#include<iostream>

int main()
{
	char str[6] = {};
	int n;
	std::cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> str[i];
	}
	// std::cout << str;
	for (size_t i = 0; i < n; i++)
	{
		std::cout << str[i];
	}
	return 0;
}