#include<iostream>

int main()
{
	char str[4][5] =
	{
		"ABKT",
		"KFCF",
		"BBQQ",
		"TPZF",
	};
	char a = ' ';
	char b = ' ';
	int aCount = 0;
	int bCount = 0;
	std::cin >> a >> b;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if(str[i][j] == a)
			{
				aCount++;
			}
			if (str[i][j] == b)
			{
				bCount++;
			}
		
		}
	}
	std::cout << aCount + bCount;// +bucket[1];
	return 0;
}