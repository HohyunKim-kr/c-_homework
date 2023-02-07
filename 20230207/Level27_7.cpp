#include<iostream>

int main()
{
	int arr[3][4] =
	{
		0,0,0,0,
		1,0,0,0,
		1,0,0,0
	};


	for (int i = 0; i < 4; i++)
	{
		std::cin >> arr[0][i];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i - 1 > 2 || j + 1 > 3) continue;
			arr[i + 1][j + 1] += arr[i][j + 1];
			arr[i + 1][j + 1] += arr[i + 1][j];			
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << arr[i][j] << " ";
		}

		std::cout << std::endl;
	}

	return 0;
}