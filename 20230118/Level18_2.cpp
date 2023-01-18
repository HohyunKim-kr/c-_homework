#include<iostream>

int main()
{
	int ID[3][4] =
	{
		65000,35,42,70,
		70,35,65000,1300,
		65000,30000,38,42
	};
	
	int idCount[65535] = { 0, };

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			idCount[ID[i][j]]++;
		}
	}
	int max = 0;
	int index = 0;
	for (size_t i = 0; i < 65534; i++)
	{
		
		if (max < idCount[i])
		{
			max = idCount[i];
			index = i;
		}

	}
	std::cout << index;

	return 0;
}