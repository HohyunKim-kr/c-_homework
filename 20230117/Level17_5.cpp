#include<iostream>

int main()
{
	int arr1[4][4] =
	{
		{0,0,0,1},
		{1,1,0,1},
		{1,0,0,1},
		{1,1,1,1}
	};

	int arr2[4][4] =
	{
		{1,1,1,1},
		{1,0,1,1},
		{1,0,0,0},
		{1,0,0,0}
	};
	int arrSum[4][4] = { 0, };

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arr1[i][j] | arr2[i][j])
			{
				arrSum[i][j] = arr1[i][j] | arr2[i][j];
			}
			else
			{
				arrSum[i][j] = arr1[i][j] | arr2[i][j];
			}
		}
	}

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arrSum[i][j] == 0)
			{
				std::cout << "(" << i << "," << j << ")" << std::endl;
			}
			// std::cout << arrSum[i][j];
		}
		// std::cout << std::endl;
	}

	return 0;
}