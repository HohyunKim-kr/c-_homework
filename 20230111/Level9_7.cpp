#include<iostream>

// ���ÿ����÷ο� ���� �̰� ����� �ȳ���
int main()
{
	int arr[6][2] = { 0 };
	int tmp;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (arr[i][j + 1] >= arr[i][j])
			{
				int tmp;
				tmp = arr[i][j];
				arr[i][j] = arr[i][j + 1];
				arr[i][j + 1] = tmp;
			}
			std::cout <<  arr[i][j];
		}
		std::cout << std::endl;
	}

	// for (int i = 0; i < 2; i++)
	// {
	// 	for (int j = 0; j < 6; j++)
	// 	{
	// 		if(arr[i][j])
	// 	}
	// }


	
	


	return 0;

}