#include<iostream>

int main()
{
	char arr[17] = { 0, };
	char a, b, c;
	std::cin >> a >> b >> c;
	for (size_t i = 0; i < 7; i++)
	{
		arr[i] = a;
	}
	for (size_t i = 7; i < 13; i++)
	{
		arr[i] = b;
	}
	for (size_t i = 13; i < 17; i++)
	{
		arr[i] = c;
	}
	for(size_t i = 16; i > 0; i--)
	{
		std::cout << arr[i];
	}


	return 0;
}