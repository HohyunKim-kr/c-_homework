#include<iostream>

int main()
{
	int arr[7];

	
	for (int i = 0; i < 7; i++)
	{
		std::cin >> arr[i];
	}
	int MIN = arr[0];
	int MAX = arr[0];

	for (int i = 0; i < 7; i++)
	{
		if (arr[i] >= MAX)
		{
			MAX = arr[i];
		}
		if (arr[i] <= MIN)  // 
		{
			MIN = arr[i];
		}
	}
	
	std::cout << "MAX=" << MAX << "\nMIN=" << MIN;
	return 0;
}