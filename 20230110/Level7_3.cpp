#include<iostream>

int main()
{
	int arr[2][3] = { {3,1,1},{2,3,2} };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << arr[i][j];
		}
	}

	return 0;
}