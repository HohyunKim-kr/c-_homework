#include<iostream>

int main()
{
	int a = 8;
	int tmp = 1;

	for (int i = 0; i < 5; ++i)
	{
		tmp *= a;
	}
	std::cout << tmp;
	return 0;
}