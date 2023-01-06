#include <iostream>

int main()
{
	int a = 0; 
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		std::cout << "MAX¹ß°ß";
	}
	else
	{
		std::cout << "MAX¾Æ´Ô";
	}

	return 0;
}