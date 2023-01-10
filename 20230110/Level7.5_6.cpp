#include<iostream>

int main()
{

	int arr[2][4] = { 0, };
	int y;
	int x;

	std::cin >> y >> x;


	arr[y][x] = 1;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << arr[i][j];
 		}
		std::cout << std::endl;
	}
	return 0;
}