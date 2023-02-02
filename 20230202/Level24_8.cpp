#include<iostream>

// 다시풀기
int main()
{
	int arr[7] = { 3,5,5,6,9,1,2 };

	int a, b;
	
	std::cin >> a >> b;
	
	for (size_t i = 0; i < 7; i++)
	{
		if (i == a)
		{
			for (size_t i = b; i >= a; i--)
			{
				std::cout << arr[i] << " ";
			}
		}	
		else
		{
			std::cout << arr[i] << " ";
		}
	}
	

	return 0;
}