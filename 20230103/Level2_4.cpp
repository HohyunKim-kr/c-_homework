#include <iostream>

int main()
{
	int a;
	int b;
	int c;

	std::cin >> a >> b >> c;

	for (int i = 0; i < 3; ++i)
	{
		std::cout << a;
	}
	std::cout <<std::endl;
	for (int i = 0; i < 3; ++i)
	{
		std::cout << b;
	}
	std::cout << std::endl;
	for (int i = 0; i < 3; ++i)
	{
		std::cout << c;
	}


	return 0;
}