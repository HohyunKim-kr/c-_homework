#include <iostream>

int main()
{
	int a, b, c;

	std::cin >> a >> b >> c;

	if ((a + b + c) >= (a * b * c))
	{
		std::cout << "����� ��";
	}
	else
	{
		std::cout << "�Ҽ��� ��";
	}
	

	return 0;
}