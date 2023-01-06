#include<iostream>

int main()
{
	int arr[5];
	int a;

	std::cin >> a;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = a;
		std::cout << arr[i];
	}

	return 0;
}