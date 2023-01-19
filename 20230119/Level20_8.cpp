#include<iostream>

int a;

void Divide(int a);

int main()
{
	std::cin >> a;

	Divide(a);

	return 0;
}

void Divide(int a)
{
	std::cout << a;
	if (a <= 0)
	{
		return;
	}
	else
	{
		Divide(a /= 2);
		std::cout << a;
	}
	
}
