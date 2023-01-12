#include<iostream>

int GOP();
int SUM();

int main()
{
	int a, b;

	a = GOP();
	b = SUM();

	if (a > b)
	{
		std::cout << "GOP > SUM";
	}
	if (a < b)
	{
		std::cout << "GOP < SUM";
	}
	else
	{
		std::cout << "GOP == SUM";
	}

	return 0;
}

int GOP()
{
	int x, y;
	std::cin >> x >> y;

	return x * y;
}

int SUM()
{
	int x, y;
	std::cin >> x >> y;
	return x + y;
}