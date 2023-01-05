#include <iostream>

int main()
{
	int a;
	int tmp;

	std::cin >> a;
	
	tmp = ((a * 2) + 20) / 5;

	if (tmp != 100)
	{
		std::cout << "Magic";
	}
	return 0;
}