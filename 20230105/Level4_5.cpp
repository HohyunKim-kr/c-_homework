#include<iostream>

int main()
{
	int arr[6] = { 3, 4, 1, 6, 7, 5 };

	int a = 0; 
	int b = 0;
	int sum = 0;
	
	std::cin >> a >> b;
	for (int i = 0; i < 6; i++)
	{
		sum = arr[a] + arr[b];
	}
	std::cout << sum;


	return 0;
}