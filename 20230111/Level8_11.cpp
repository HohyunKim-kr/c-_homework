#include<iostream>
void starBox();
void macDoll();
void copyBean();
int main()
{
	int coffee;

	std::cin >> coffee;

	if (coffee > 3500 && coffee <= 5000)
	{
		starBox();
	}
	else if (coffee >= 2500 && coffee <= 3500)
	{
		macDoll();
	}
	else
	{
		copyBean();
	}
	return 0;
}

void starBox()
{
	for (int i = 1; i < 20; i++)
	{
		std::cout << i;
		i + 2;
	}
}
void macDoll()
{
	for (int i = 'H'; i >= 'A'; i--)
	{
		std::cout << (char)(i);
	}
}
void copyBean()
{
	for (int i = -5; i <=5; i++)
	{
		std::cout << i;
	}
}