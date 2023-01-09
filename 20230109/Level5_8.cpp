#include<iostream>

void KFC();
void BBQ();
int a = 0;
int main()
{
	KFC();
	BBQ();
	return 0;
}

void KFC()
{
	std::cin >> a;
}

void BBQ()
{
	if (a > 5)
	{
		std::cout << "만세";
	}
	else
	{
		std::cout << "다시";
	}
}
