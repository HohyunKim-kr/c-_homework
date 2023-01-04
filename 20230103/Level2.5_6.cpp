#include<iostream>

int main()
{
	int b1;
	int b2;
	int b3;
	int b4;

	std::cin >> b1 >> b2 >> b3 >> b4;

	if (b1 >= b2)
	{
		if (b1 >= b3)
		{
			if (b1 >= b4)
			{
				std::cout << "b1이 가장 크다";
			}
		}
	}

	return 0;
}