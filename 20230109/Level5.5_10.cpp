#include<iostream>

int main()
{
	int arr[6];
	int a;
	std::cin >> a;

	if (a == 3)
	{
		for (int i = 0; i < 6; i++)
		{
			arr[i] = a;		
			a += 3;
			std::cout << arr[i] << " ";
		}
	}
	if (a == 2)
	{
		for (int i = 0; i < 6; i++)
		{
			arr[i] = a;
			a += 2;
			std::cout << arr[i] << " ";
		}
	}
	

	return 0;
}