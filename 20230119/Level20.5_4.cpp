#include<iostream>

int main()
{
	int cnt = 0;
	int arr1[4][4] =
	{
		1,1,1,1,
		1,0,0,1,
		1,0,0,0,
		0,0,1,0
	};

	int arr2[4][4] =
	{
		0,0,0,0,
		0,0,0,0,
		1,1,1,1,
		0,1,0,0
	};


	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arr1[i][j] == arr2[i][j])
			{
				cnt++;
			}
		}
	}

	if (cnt != 0) std::cout << "걸리다";
	else std::cout << "걸리지않는다";

	

	return 0;
}