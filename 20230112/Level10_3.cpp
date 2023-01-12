#include<iostream>

int main()
{
	int a;
	int arr[3][3];
	std::cin >> a;

	if (a % 5 == 1)
	{
		// y,x 
		int t = a % 5;
		// 0,0 = 9 / 0,1 = 6 / 0,2 = 3
 		// 1,0 = 8 / 1,1 = 5 / 1,2 = 2 
		// 2,0 = 7 / 2,1 = 4 / 2,2 = 1
		for (int i = 2; i >= 0; i--)
		{
			for (int j = 2; j >= 0; j--)
			{
				arr[i][j] = t++;
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				std::cout << arr[j][i];
			}
			std::cout << std::endl;
		}
	}
	else if (a % 5 == 2)
	{
		int t = a % 5 - 1;
		// 0,0 = 7 / 0,1 = 8 / 0,2 = 9
		// 1,0 = 4 / 1,1 = 5 / 1,2 = 6 
		// 2,0 = 1 / 2,1 = 2 / 2,2 = 3

		for (int i = 2; i >= 0; i--)
		{
			for (int j = 0; j <3; )
			{
				arr[i][j] = t++;
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				std::cout << arr[i][j];
			}
			std::cout << std::endl;
		}
	}
	else
	{
		int t = 10;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = t++;
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				std::cout << arr[j][i];
			}
			std::cout << std::endl;
		}
	}


	return 0;
}