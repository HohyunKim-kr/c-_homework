#include<iostream>

int main()
{
	int a; 
	int b;

	std::cin >> a >> b;

	if (abs(a - b) > 5)
	{
		std::cout << "¸Ö´Ù";
	}
	else
	{
		std::cout << "°¡±õ´Ù";
	}
	return 0;
}