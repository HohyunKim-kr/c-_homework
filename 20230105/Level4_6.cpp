#include<iostream>

int main()
{
	int arr[4] = { 3, 1, 2, 5 };

	int a;

	std::cin >> a;

	if (arr[a] > 2)
	{
		std::cout << "���";
	}
	else
	{
		std::cout << "�Ф�";
	}

	return 0;
}