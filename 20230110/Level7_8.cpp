#include<iostream>

int main()
{
	int arr[3][3] = { {3,4,1},{2,1,4},{3,3,0} };
	int even = 0;
	int odd = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] % 2 == 0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
	}
	std::cout << "¦�� :" << even << std::endl;
	std::cout << "Ȧ�� :" << odd << std::endl;


	return 0;
}