#include<iostream>

int main()
{
	int arr[4][4] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == 0)
			{
				arr[i][j] = '!';
			}
			else if (arr[i][j] % 2 == 0)
			{
				arr[i][j] = '#';
			}
			else if (arr[i][j] % 2 != 0)
			{
				arr[i][j] = '@';
			}
			
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << char(arr[i][j]);
		}
		std::cout << std::endl;
	}
	return 0;
}