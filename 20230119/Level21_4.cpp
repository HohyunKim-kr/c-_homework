#include<iostream>

void Recursive(int a);


int main()
{
	int a;
	std::cin >> a;

	Recursive(a);

	return 0;
}

void Recursive(int a)
{
	if (a == 0)
	{
		return;
	}
	else
	{
		std::cout << a;
		for (size_t i = 0; i < 2; i++)
		{
			Recursive(a - 1);
			std::cout << a;
		}
	}
}