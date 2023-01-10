#include<iostream>

int main()
{
	int a, b, c;
	int MAX = 0;
	int MIN = 0;
	std::cin >> a >> b >> c;

	if (a >= b && a >= c)
	{
		MAX = a;
		if (b >= c)
		{
			MIN = c;
		}
		else
		{
			MIN = b;
		}
	}
	if (b >= a && b >= c)
	{
		MAX = b;
		if (a >= c)
		{
			MIN = c;
		}
		else
		{
			MIN = a;
		}
	}
	if (c >= a && c >= b)
	{
		MAX = c;
		if (a >= b)
		{
			MIN = b;
		}
		else
		{
			MIN = a;
		}
	}

	std::cout << "MAX =" << MAX << std::endl;
	std::cout << "MIN =" << MIN << std::endl;


	return 0;
}