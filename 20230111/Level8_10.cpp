#include<iostream>

int main()
{
	int arr[3][4] = { {4,3,1,1},{3,1,2,1},{0,0,1,2} };
	int a;
	int count = 0;

	std::cin >> a;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == a)
			{
				count++;
			}
		}
	}

	std::cout << count << "개 존재합니다";

}