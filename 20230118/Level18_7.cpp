#include<iostream>

int main()
{
	int train[8] = {3,7,6,4,2,9,1,7};
	int team[3];

	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> team[i];
	}

	for (size_t i = 0; i < 8; i++)
	{
		if (train[i] == team[0] && train[i + 1] == team[1] && train[i + 2] == team[2])
		{
			std::cout << i << "¹ø~" << i + 2 << "¹ø Ä­";
		}
	}
	return 0;
}