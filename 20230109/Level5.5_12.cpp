#include<iostream>

int main()
{
	int arr[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
		sum += arr[i];
	}
	std::cout << "���� " << sum << "�Դϴ�";
	return 0;
}