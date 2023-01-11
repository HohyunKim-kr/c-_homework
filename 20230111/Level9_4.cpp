#include<iostream>

int main()
{
	int arr[6] = { 3,4,2,5,7,9 };
	int a, b;
	int tmp;
	std::cin >> a >> b;

	tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;

	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}