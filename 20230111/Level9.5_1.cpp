#include<iostream>

int main()
{
	int arr1[5] = { 2,1,2,4,5 };
	int arr2[3][3] =
	{
		2,5,3,
		4,5,7,
		8,7,2
	};

	int a;
	int cnt = 0;

	std::cin >> a;

	for (size_t i = 0; i < 5; i++)
	{
		if (arr1[i] == a)
		{
			cnt++;
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (arr2[i][j] == a)
			{
				cnt++;
			}
		}
	}
	std::cout << cnt;

	return 0;
}