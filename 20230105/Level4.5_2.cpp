#include<iostream>

int main()
{
	int a;
	std::cin >> a;

	if (a != 3)
	{
		std::cout << "3�� �ƴϴ�\n";
	}
	if (a != 5)
	{
		std::cout << "5�� �ƴϴ�\n";
	}
	if (1 < a && a < 10)
	{
		for (int i = 5; i > 0; i--)
		{
			std::cout << i << std::endl;
		}
	}


	return 0;
}