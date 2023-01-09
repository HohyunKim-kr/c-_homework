#include<iostream>

int main()
{
	int arr[5] = { 4,1,2,3,5 };
	char a;
	std::cin >> a;
	if (a == 'a' || a == 'b' || a == 'c')
	{
		for (int i = 3; i >= 0; i--)
		{
			std::cout << arr[i] << " ";
		}
	}
	else
	{
		for (int i = 4; i > 0; i--)
		{
			std::cout << arr[i] << " ";
		}
	}


	return 0;
}