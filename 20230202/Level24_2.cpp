#include<iostream>

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int MAX = 0;
	
	int* simData[5] = {&a,&b,&c,&d,&e};

	std::cin >> a >> b >> c >> d >> e;

	int MIN = *simData[0];

	for (size_t i = 0; i < 5; i++)
	{
		if (*simData[i] > MAX)
		{
			MAX = *simData[i];
		}
		if (*simData[i] < MIN)
		{
			MIN = *simData[i];
		}
	}

	std::cout << "MAX:" << MAX << std::endl;
	std::cout << "MIN:" << MIN;

	return 0;
}