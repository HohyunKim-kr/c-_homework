#include<iostream>

int main()
{
	int arr[11] = { 3,4,1,5,8,1,7,7,3,6,9 };
	int a;

	std::cin >> a;

	for (int i = 0; i < 11; i = i+2)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}