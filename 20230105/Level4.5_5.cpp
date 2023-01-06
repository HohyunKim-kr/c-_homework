#include<iostream>

int main()
{
	int arr[7];
	int sum = 0;
	for (int i = 0; i < 7; i++)
	{
		std::cin >> arr[i];
	}
	sum = arr[0] + arr[1] + arr[2];
	std::cout << sum;

	return 0;
}