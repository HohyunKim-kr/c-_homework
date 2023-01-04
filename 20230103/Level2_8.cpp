#include <iostream>

int main()
{
	int a;
	int b;
	std::cin >> a >> b;
	if (a > b)
	{
		for (int i = 0; i < 4; ++i)
		{
			std::cout << a << " ";
		}
	}
	else
	{
		for (int i = 0; i < 4; ++i)
		{
			std::cout << b << " ";
		}
	}
	return 0;
}