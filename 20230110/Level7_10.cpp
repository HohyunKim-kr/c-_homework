#include<iostream>

void input();
void output();

char ch[4][4];
char tmp;
int main()
{
	input();
	output();
	return 0;
}

void input()
{
	std::cin >> tmp;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			ch[i][j] = tmp;
		}
	}
}
void output()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << ch[i][j];
		}
		std::cout << std::endl;
	}
}
