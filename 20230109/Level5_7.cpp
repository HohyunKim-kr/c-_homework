#include<iostream>
int main()
{
	int arr[6];
	int a;

	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
	}
	std::cin >> a;
	for (int i = 3; i < 6; i++)
	{
		arr[i] = a++;
	}

	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}