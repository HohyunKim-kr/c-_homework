#include<iostream>

int main()
{
	int a;

	std::cin >> a;

	if (a > 5)
	{
		for (int i = 1; i <= 10; i++)
		{
			std::cout << i << std::endl;
		}
	}
	else
	{
		for (int i = 1; i <= 5; i++)
		{
			std::cout << i << std::endl;
		}
	}
	return 0;
}