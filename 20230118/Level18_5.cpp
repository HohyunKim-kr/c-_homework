#include<iostream>

char town[3][4] =
{
	"CDA",
	"BMZ",
	"QPO",
};

char black[5] = {};
int bucket[512] = {};

void Count(char ch)
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (town[i][j] == ch)
			{
				bucket[ch]++;
			}			
		}
	}
}

int main()
{
	

	std::cin >> black;


	for (size_t i = 0; i < 4; i++)
	{
		Count(black[i]);
	}

	int cnt = 0;

	for (size_t i = 0; i < 512; i++)
	{
		if (bucket[i] != 0)
		{
			cnt++;
		}
	}

	std::cout << cnt;

	return 0;
}