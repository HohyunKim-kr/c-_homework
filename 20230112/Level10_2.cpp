#include<iostream>

char getChar(char a, char b);

int main()
{
	char a;
	char b;
	std::cin >> a >> b;
	std::cout << getChar(a, b);


	return 0;
}

char getChar(char a, char b)
{
	if (a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}