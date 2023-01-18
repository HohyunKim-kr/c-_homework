#include<iostream>



int main()
{
	char str[5][4] =
	{
		"ABC",
		"AGH",
		"HIJ",
		"KAB",
		"ABC"
	};
	int DAT[91] = { };

	int max = 0; 

	for (size_t i = 0; i <5; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			DAT[str[i][j]]++;
		}
	}
	
	for (size_t i = 0; i < 91; i++)
	{
		for (size_t j = 0; j < DAT[i]; j++)
		{
			std::cout << (char)i;
		}
	}

	return 0;
}