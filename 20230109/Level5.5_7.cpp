#include<iostream>

int main()
{
	int data[4];
	int a;

	std::cin >> a;

	if (a == 10)
	{
		for (int i = 0; i < 4; i++)
		{
			data[i] = a--;
			std::cout << data[i] << " ";
		}
	}
	return 0;
}