#include<iostream>

int main()
{
	int arr1[5] = {3,5,2,4,1};
	int arr2[3][2] = { {9,8},{7,1},{3,4} };

	int a;
	std::cin >> a;
	if (a % 2 != 0)
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << arr1[i];
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				std::cout << arr2[i][j];
			}
			std::cout << std::endl;
		}
	}
	

	return 0;
}