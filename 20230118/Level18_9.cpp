#include<iostream>

int main()
{
	int arr[3][5] =
	{
		1,3,3,5,1,
		3,6,2,4,2,
		1,9,2,6,5
	};
	int bucket[10] = { 0, };
	int n;

	std::cin >> n;
	
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			bucket[arr[i][j]]++;
		}
	}

	for (size_t i = 0; i < 10; i++)
	{
		if (bucket[i] == n)
		{
			std::cout << i << " ";
		}
	}

	return 0;
}