#include<iostream>

void BBQ(int* p);

int main()
{
	int a;

	std::cin >> a;
	if (a == 3 || a == 5 || a == 7)
	{
		for (int i = 0; i < 10; i++)
		{
			std::cout << i + 1;
		}
	}
	else if (a == 0 || a == 8)
	{
		for (int i = 10; i > 0; i--)
		{
			std::cout << i;
		}
	}
	else
	{
		BBQ(&a);
	}
	


	return 0;
}

void BBQ(int *p)
{
	if (*p > 0 && *p < 5)
	{
		std::cout << "초기값";
	}
	else if (*p > 6 && *p < 10)
	{
		std::cout << "중간값";
	}
	else
	{
		std::cout << "알수없는값";
	}
}