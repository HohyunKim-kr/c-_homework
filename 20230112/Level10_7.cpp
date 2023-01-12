#include<iostream>

#define x 3
#define y 4

int main()
{

	int arr[x][y] = { 0 };

	int t = x * y;
	int a;

	for (int i = x; i > 0; i--)
	{
		for (int j = y; j > 0; j--)
		{
			arr[i - 1][j - 1] = t--;
		}
	}
	
	std::cin >> a;

	if (a == 2)
	{
		for (int i = x; i > 0; i--)
		{
			for (int j = y; j > 0; j--)
			{
				arr[i - 1][1] = 0;
				std::cout << arr[i - 1][j - 1];
			}
			std::cout << std::endl;
		}
	}
	else if (a == 0)
	{
		for (int i = x; i > 0; i--)
		{
			for (int j = y; j > 0; j--)
			{
				arr[i - 1][3] = 0;
				std::cout << arr[i - 1][j - 1];
			}
			std::cout << std::endl;
		}
	}
	
	return 0;
}