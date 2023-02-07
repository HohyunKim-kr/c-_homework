#include<iostream>
// 다시 풀기
int main()
{
	int arr[3][3] =
	{
		3,5,1,
		9,2,7,
		6,11,3
	};

	int max = 0;
	int secondMax = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] != max && arr[i][j] > secondMax) secondMax = arr[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << max << "(" << i << "," << j << ")" << std::endl;
			std::cout << secondMax << "(" << i << "," << j << ")" << std::endl;
		}
	}


	
	


	return 0;
}