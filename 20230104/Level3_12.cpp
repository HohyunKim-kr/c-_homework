#include<iostream>

int main()
{
	int a;
	int b;
	int c;

	std::cin >> a >> b >> c;

	if (a + b + c > 10)
	{
		std::cout << a * b * c;
	}
	else
	{
		std::cout << 0;
	}

	return 0;
}