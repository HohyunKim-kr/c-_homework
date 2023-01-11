#include<iostream>

void input();
void process();
void output();

int sum = 0;
int arr[2][3] = { 0 };

int main()
{
	input();
	process();
	output();
	return 0;
}

void input()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> arr[i][j];
		}
	}
}

void process()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
		}
	}
}

void output()
{
	std::cout << sum;
}
