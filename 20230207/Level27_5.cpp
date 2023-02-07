#include<iostream>

int main()
{
	int arr[4][4] = { 0, };
	int direct[4][4] = { {-1, 0} , {0, -1} , {0 , 1} , {1 , 0} };
	bool flag = false;

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (arr[i][j] == 1)
			{
				for (size_t k = 0; k < 4; k++)
				{
					int dy = i + direct[k][0];
					int dx = j + direct[k][1];

					if (dy > 3 || dy < 0) continue;
					if (dx > 3 || dx < 0) continue;
					if (arr[dx][dy] == 1) flag = 1;
				}
			}
		}
	}

	if (flag) std::cout << "위험한 상태";
	else std::cout << "안전한 상태";





	// for (size_t i = 0; i < 4; i++)
	// {
	// 	for (size_t j = 1; j <= 4; j++)
	// 	{
	// 		if (arr[i][j] == 1 && arr[i][j - 1] == 1)
	// 		{
	// 			std::cout << "위험한 상태";
	// 		}
	// 		else std::cout << "안전한 상태";
	// 	}
	// }

	return 0;
}