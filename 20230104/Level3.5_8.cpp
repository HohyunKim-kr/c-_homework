#include <iostream>

int main()
{
	int a = 0; 
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;

	for (int i = 0; i <= b - a; i++)
	{
		std::cout << a + i << " ";
	}

	std::cout << std::endl;
	for (int i = 0; i <= c - a; i++)
	{
		std::cout << a + i<< " ";
	}
	return 0;
}