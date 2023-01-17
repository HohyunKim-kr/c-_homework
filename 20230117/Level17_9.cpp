#include<iostream>

void isExist(int a);


int main()
{
	int arr[6] = { 3,7,4,1,2,6 };

	int unriver[2][2] = { 0, };
	
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			std::cin >> unriver[i][j];
		}
	}

	isExist(unriver);


	return 0;
}

void isExist(int a)
{
	for (size_t i = 0; i < 6; i++)
	{
		if (arr[i] == a)
		{

		}
	}
}
