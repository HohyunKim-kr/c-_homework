#include<iostream>

int main()
{
	int arr[6];
	int a;

	std::cin >> a;
	for (int i = 0; i < 6; i++)
	{
		arr[i] = a--;
	}
	std::cout << arr[2];
	
	return 0;
}