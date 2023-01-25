#include<iostream>
#include <string>

int main()
{
	std::string str;
	// char str[11];

	std::cin >> str;

	for(int i = str.length(); i >= 0; i--)
	{
		for (int j = i; j <= str.length(); j++)
		{
			std::cout << str[j];
		}
		std::cout << std::endl;
	}

	return 0;
}