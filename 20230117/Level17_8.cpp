#include<iostream>

int main()
{
	int vect[3][3] =
	{
		{3,7,4},
		{2,2,4},
		{2,2,5}
	};

	int target[3];
	int count[3] = {0,};
	
	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> target[i];
	}

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (vect[i][j] == target[i])
			{
				count[i]++;
				std::cout << count[i];
			}
		}
	}

	for (size_t i = 0; i < 3; i++)
	{
		std::cout << count[i];
	}
	return 0;
}