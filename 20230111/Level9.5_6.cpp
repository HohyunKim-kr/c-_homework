#include<iostream>

int main()
{
	int arr[3][3] =
	{
		3,5,14,
		2,3,9,
		6,2,7
	};

	int cnt = 0;
	int a;

	std::cin >> a;

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (arr[i][j] % a == 0)
			{
				cnt++;
			}
		}
	}
	std::cout << cnt;



	return 0;
}