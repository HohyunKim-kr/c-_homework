#include<iostream>

int main()
{
	int map[8][8] =
	{
		0,1,1,0,0,0,0,1,
		1,0,0,0,0,0,0,0,
		1,0,0,1,1,0,1,0,
		0,0,1,0,0,1,0,0,
		0,0,1,0,0,0,0,0,
		0,0,0,1,0,0,0,0,
		0,0,1,0,0,0,0,0,
		1,0,0,0,0,0,0,0
	};

	char ch = 0; 
	std::cin >> ch;

	for (int i = 0; i < 8; i++)
	{
		if (map[i][ch - 'A'] != 0)
		{
			for (int j = 0; j < ch - 'A'; j++)
			{
				if (map[i][j] != 0) std::cout << (char)(j + 'A') << " ";
			}
		}
	}


	return 0;
}