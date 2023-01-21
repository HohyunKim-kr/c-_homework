#include<iostream>

int main()
{
	int arr[3][3] = { 0, };
	int y, x, input;

	std::cin >> y >> x >> input;

	arr[y][x] = 5;

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cout << arr[i][j];
		}
		std::cout << std::endl;
	}

	return 0;
}