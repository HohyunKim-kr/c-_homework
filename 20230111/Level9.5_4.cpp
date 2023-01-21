#include<iostream>

int main()
{
	int arr[3][3] = 
	{
		10,3,20,
		60,30,40,
		20,30,40
	};

	int a, b;
	int cnt = 0;

	std::cin >> a >> b;

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (arr[i][j] >= a && b >= arr[i][j])
			{
				cnt++;
			}
		}
	}
	std::cout << cnt;


	return 0;
}