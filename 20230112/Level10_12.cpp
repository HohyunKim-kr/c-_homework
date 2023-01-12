#include<iostream>

char aTOZ();

int main()
{
	std::cout << aTOZ();
	return 0;
}

char aTOZ()
{
	int a;
	std::cin >> a;

	if (abs(a - 'Z') > abs(a - 'A'))
	{
		return 'A';
	}
	else
	{
		return 'Z';
	}
}
