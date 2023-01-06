#include<iostream>

int main()
{
	int a;
	int arr[5];

	std::cin >> a;

	a += 5;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = a;
		std::cout << arr[i];
	}

	return 0;
}