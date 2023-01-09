#include<iostream>

int arr[4] = { 0, };

void input();
void output();


int main()
{
	input();
	output();
	return 0;
}

void input()
{
	for (int i = 0; i < 4; i++)
	{
		std::cin >> arr[i];
	}
}
void output()
{
	for (int i = 3; i >= 0; i--)
	{
		std::cout << arr[i];
	}
}