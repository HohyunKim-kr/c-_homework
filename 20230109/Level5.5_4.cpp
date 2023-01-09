#include<iostream>

int arr[5];
int a;

void KFC();

int main()
{
	
	std::cin >> a;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = a--;
	}
	KFC();

	return 0;
}

void KFC()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i];
	}
}