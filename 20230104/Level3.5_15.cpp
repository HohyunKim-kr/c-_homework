#include<iostream>

int main()
{
	int input;

	std::cin >> input;

	for (int i = input; i >= 0; i--)
	{
		std::cout << i;
	}
	return 0;
}