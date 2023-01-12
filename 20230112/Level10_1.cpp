#include<iostream>

int main()
{
	int a;
	int arr[4][4] = { 0 };
	std::cin >> a;

	if (a % 2 == 0)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[i][i] = i + 1;
		}
	}
	else
	{
		// 0,3 >> 1,2 >> 2,1 >>> 3,0
		for (int i = 0; i < 4; i++)
		{
			int j = 3 - i;
			arr[i][j] = i + 1;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}