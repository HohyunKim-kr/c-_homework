#include<iostream>
void KFC();
void MC();
int main()
{
	int a = 0;
	std::cin >> a;
	if (a == 1)
	{
		KFC();
	}
	if (a == 2)
	{
		MC();
	}

	return 0;
}

void KFC()
{
	std::cout << "KFC�Դϴ�";
}

void MC()
{
	std::cout << "MC�Դϴ�";
}
