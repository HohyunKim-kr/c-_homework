#include<iostream>

int main()
{
	int a = 0;
	int b = 0;

	std::cin >> a >> b;

	if (30 < a * b && a * b < 50)
	{
		std::cout << "������ ������";
	}
	else if (a * b >= 50)
	{
		std::cout << "ū ������";
	}
	else if (a * b <= 30)
	{
		std::cout << "���� ������";
	}

	return 0;
}