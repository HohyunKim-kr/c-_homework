#include<iostream>

int main()
{
	char c;
	int a;

	std::cin >> c >> a;

	for (size_t i = 0; i < a; i++)
	{
		for (size_t j = 0; j < a; j++)
		{
			std::cout << c;
		}
		std::cout << std::endl;
	}

	return 0;
}