#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a; 


	for (int i = a; i < a+3; i++)
	{
		std::cout << i + 2 << " ";
	}
	return 0;
}