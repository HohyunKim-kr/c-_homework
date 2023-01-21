#include<iostream>

int main()
{
	char a, b;
	int t;

	std::cin >> a >> b >> t;

	for (size_t i = 0; i < t; i++)
	{
		for (size_t j = a; j <= b; j++)
		{
			std::cout << (char)j;
		}
		std::cout << std::endl;
	}

	return 0;
}