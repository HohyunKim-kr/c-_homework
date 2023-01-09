#include<iostream>

void LOT();

int main()
{
	int a = 0;

	std::cin >> a;
	
	for (int i = 0; i < a; i++)
	{
		LOT();
		std::cout << std::endl;
	}

	return 0;
}

void LOT()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1;
	}
}