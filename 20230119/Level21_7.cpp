#include<iostream>
#include<cstring>

void Count(int a);

int main()
{
	char str[11];

	std::cin >> str;

	int a = strlen(str);

	Count(a);


	return 0;
}

void Count(int a)
{
	std::cout << a << " ";
	if (a != 1)
	{
		Count(a - 1);
		std::cout << a << " ";
	}
	else
	{
		return;
	}
	
}