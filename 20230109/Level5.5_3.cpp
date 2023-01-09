#include<iostream>

int arr1[5];
int arr2[5];
int a1;
int a2;

void PrintAll();
int main()
{
	

	std::cin >> a1 >> a2;

	for (int i = 0; i < 5; i++)
	{
		arr1[i] = a1;
		arr2[i] = a2;
	}
	PrintAll();
	return 0;
}
void PrintAll()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr1[i];
	}

	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << arr2[i];
	}
}