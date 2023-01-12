#include<iostream>

int yesOrNo();


int main()
{

	std::cout << yesOrNo();

	return 0;
}

int yesOrNo()
{
	int a;
	std::cin >> a;

	if (a % 3 == 0)
	{
		return 7;
	}
	else if (a % 3 == 1)
	{
		return 35;
	}
	else if (a % 3 == 2)
	{
		return 50;
	}
}