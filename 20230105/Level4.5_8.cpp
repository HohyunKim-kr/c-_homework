#include<iostream>

int main()
{
	int a = 0;
	int arr[6] = { 0, };
	std::cin >> a;
	for (int i = 0; i < 6; i++)
	{
		arr[i] = a++;
		std::cout << arr[i] << std::endl;
	}


	return 0;
}