#include<iostream>
// 다시풀기
void isExist(int _arr[3][3], int _a[3]);
int main()
{
	int arr[3][3] =
	{
		{3,5,9},
		{4,2,1},
		{5,1,5}
	};

	int a[3];

	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> a[i];
	}

	isExist(arr, a);



	return 0;
}

void isExist(int _arr[3][3], int _a[3])
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (_arr[i][j] == _a[i])
			{
				std::cout << _a[i] << ":존재" << std::endl;
				break;
			}
			if (_arr[i][j] != _a[i])
			{
				std::cout << _a[i] << ":미발견" << std::endl;
				break;
			}

		}
	}
}
