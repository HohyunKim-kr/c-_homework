#include <iostream>

int main()
{
	int a = 0; 
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		std::cout << "MAX�߰�";
	}
	else
	{
		std::cout << "MAX�ƴ�";
	}

	return 0;
}