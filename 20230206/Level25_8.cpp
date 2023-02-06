#include<iostream>

int main()
{
	int n;

	std::cin >> n;

	int num1 = (((n / 1000)*1000) - ((n / 10000) * 10000)) / 1000;
	int num2 = (((n / 10)*10) - ((n / 100) * 100)) / 10;

	std::cout << (num1 * 10) + num2 + 5;



	return 0;
}