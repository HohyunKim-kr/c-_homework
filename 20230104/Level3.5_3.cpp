#include <iostream>

int main()
{
	int a[4] = { 1,2,3,4 };
	int b[4];

	for (int i = 0; i < 4; i++)
	{
		std::cin >> b[i];
	}
	if (a == b)
	{
		std::cout << "테스트성공";
	}
	for (int i = 0; i < 4; i++)
	{
		if (a == b)
		{
			std::cout << "테스트성공";
		}
	}

	
	return 0;
}