#include<iostream>

// 모르겠음 
int main()
{
	char str[4][11] = {};
	int length[4] = { 0 };
	int max = 0;
	int min = 0;

	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> str[i];
	}

	for (size_t i = 0; i < 4; i++)
	{
		if (str[i] != nullptr) length[i]++;
	}
	for (size_t i = 1; i <= 4; i++)
	{
		if (length[i] > length[i - 1]) max = length[i];
		if (length[i] < length[i - 1]) min = length[i];
	}

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 11; j++)
		{
			if(max || min)
			if (str[i][j] >= 'A' && str[i][j] <= 'Z') str[i][j] += 32;
			// if (str[i][j] >= 'A' && str[i][j] <= 'Z') str[i][j] += 32;
		}
	}

	for (size_t i = 0; i < 4; i++)
	{
		std::cout << str[i];
	}



	return 0;
}