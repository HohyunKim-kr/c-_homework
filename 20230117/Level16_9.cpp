#include<iostream>

int main()
{
	int a[6] = { 0, };
	int b[6] = { 0, };

	for (size_t i = 0; i < 6; i++)
	{
		std::cin >> a[i];
	}
	for (size_t i = 0; i < 5; i++)
	{
		a[i + 1] += a[i];
	}
	for (size_t i = 0; i < 6; i++)
	{
		std::cout <<  a[i];
	}


	return 0;
}