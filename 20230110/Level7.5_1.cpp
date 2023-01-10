#include<iostream>

int main()
{
	int a; 

	std::cin >> a;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << a;
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << a;
		}
		std::cout << std::endl;
	}

	return 0;
}