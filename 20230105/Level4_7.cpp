#include<iostream>

int main()
{
	int arr[5] = { 3, 9, 27, 81, 243 };
	int a;

	std::cin >> a;
	std::cout << arr[a] - 100;
	return 0;
}