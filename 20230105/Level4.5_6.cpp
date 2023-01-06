#include<iostream>

int main()
{
	int arr[5] = { 3, 9, 12, 15 ,55 };
	int a = 0;
	int b = 0;
	int c = 0;
	int sum = 0;

	std::cin >> a >> b >> c;

	sum = a + b + c;
	if (sum > 10)
	{
		std::cout << arr[4];
	}
	else
	{
		std::cout << arr[0];
	}

	return 0;
}