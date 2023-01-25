#include<iostream>

int main()
{
	std::string str;

	std::cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << str[j];
		}
		std::cout << std::endl;
	}


	return 0;
}