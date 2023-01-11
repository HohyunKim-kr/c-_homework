#include<iostream>

char arr1[5] = { 'B','D','5','Q','A' };
char arr2[5] = { 'Q','E','R','E','F' };
char a;

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
	std::cin >> a;
}
void output()
{
	if (a >= 'a' && a <= 'z')
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << arr1[i];
		}
	}
	else if (a >= 'A' && a <= 'Z')
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << arr2[i] ;
		}
	}
	else if (a >= '0' && a <= '9')
	{
		for (int i = 'H'; i >= 'A'; i--)
		{
			std::cout << (char)(i) ;
		}
	}
}
