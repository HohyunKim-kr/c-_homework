#include<iostream>

int main()
{
	int a; 
	int b;

	std::cin >> a >> b;

	if ((a - b) % 2 != 0)
	{
		std::cout << "°í¹éÇÑ´Ù";
	}
	else
	{
		std::cout << "Â¦»ç¶û¸¸";
	}

	return 0;
}