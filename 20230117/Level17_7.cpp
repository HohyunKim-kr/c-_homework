#include<iostream>

int main()
{
	char vect[7] = "BTKIGZ";
	char target[5];
	int count = 0;
	std::cin >> target;

	for (size_t i = 0; i < 7; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (target[j] == vect[i])
			{
				count++;
			}
		}
	}
	std::cout << count;
	return 0;
}