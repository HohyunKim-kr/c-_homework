#include<iostream>

#define x 4
#define y 4
int main()
{
	int arr[x][y] = { 0 };


	//3, 0 - > 16
	int tmp = x * y;
	for(int i = 3; i >= 0; i--)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = tmp--;
	
		}
	}

	for(int i = 3; i >= 0; i--)
	{
		for (int j = 3; j >=0; j--)
		{
			std::cout << arr[j][i];
		}
		std::cout << std::endl;
	}

	return 0;
}