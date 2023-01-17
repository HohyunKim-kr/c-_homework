#include<iostream>

int main()
{
	int arr1[2][5] =
	{
		{0,0,1,0,0},
		{0,0,1,1,1}
	};
	int arr2[2][5] =
	{
		{3,5,4,1,1},
		{3,5,2,5,6}
	};
	int a;
	bool Check = false;
	std::cin >> a;

	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (arr1[i][j] == 1 && arr2[i][j] == a)
			{
				Check = true;
			}
		}
	}

	if (Check)
	{
		std::cout << a << " 존재";
	}
	else
	{
		std::cout << a << " 없음";
	}
	return 0;
}