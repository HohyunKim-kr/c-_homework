#include<iostream>

int main()
{
	int arr[3][3] = { 0 };
	int countArr[10] = { 0, };

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cin >> arr[i][j];
			countArr[arr[i][j]]++;
		}
	}

	// int index = 0;
	for (size_t i = 1; i <= 9; i++)
	{
		if(countArr[i] == 0)
		{
			// index = i;
			std::cout << i << " ";
		}
	}

	
	return 0;
}