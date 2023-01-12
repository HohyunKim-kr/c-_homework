#include<iostream>

void input(int *a);
void CountDown(int *a);

int main()
{
	int a;

	input(&a);
	CountDown(&a);

	return 0;
}
void input(int *a)
{
	std::cin >> *a;
}

void CountDown(int *a)
{
	for (int i = *a; i > 0; i--)
	{
		std::cout << (*a)-- << " ";
	}
}