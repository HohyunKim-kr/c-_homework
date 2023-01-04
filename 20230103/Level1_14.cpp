#include <iostream>

int main()
{
	int a = 8;

	a = a + 1; // 9
	for (int i = 0; i < 3; ++i) //12
	{
		a++;
	}

	std::cout << a;
	
	return 0;
}