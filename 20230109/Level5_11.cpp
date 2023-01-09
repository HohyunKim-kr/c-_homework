#include<iostream>
int arr[6];
void PrintAll();
int main()
{
	int a;
	std::cin >> a;
	for (int i = 0; i < 6; i++)
	{
		arr[i] = a++;
	}
	PrintAll();


	return 0;
}

void PrintAll()
{
	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}