#include<iostream>

int main()
{
	int arr[6] = { 0 };
	int a, b;

	std::cin >> a >> b;
	int t = b - a;

	for (int i = 0; i <= t; i++)
	{
		arr[i] = a++;
		std::cout << arr[i];
	}

	return 0;
}