#include<iostream>

int main()
{
	int arr[8] = { 4,3,6,1,3,1,5,3 };
	int a;
	int count = 0;
	
	std::cin >> a;

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == a)
		{
			count++;
		}
	}
	std::cout << "���ڴ�" << a << "������" << count <<"��";

	return 0;
}