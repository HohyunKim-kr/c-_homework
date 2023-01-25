#include<iostream>
// 다시 풀기 모르겠음
int main()
{
	int arr1[4];
	int arr2[4];

	int Result[8];


	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> arr1[i];
	}
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> arr2[i];
	}

	for (size_t i = 0; i < 8; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arr1[j] >= arr2[j])
			{
				Result[i] = arr2[j];
			}
		}
	}


	return 0;
}