#include<iostream>

int main()
{
	int n = 0;
	std::cin >> n;

	int** map = new int *[n];
	for (size_t i = 0; i < 5; i++) map[i] = new int[n];
	int node = 0;
	std::cin  >> node;

	for(size_t i = 0;i <= n; i ++)
	{ 
		for (size_t j = 0; j <= n; j++)
		{
			// std::cin >> map[i][j];
		}
	}
	return 0;
}