#include<iostream>

void BBQ(int b);
void KFC(char ch);

int main()
{
	int a, b;
	char ch;

	std::cin >> a;

	if (a % 2 != 0)
	{
		std::cin >> b;
		BBQ(b);
	}
	else
	{
		std::cin >> ch;
		KFC(ch);
	}


	return 0;
}
void BBQ(int b)
{
	for (size_t i = 0; i < b; i++)
	{
		std::cout << i+1;
	}
}
void KFC(char ch)
{
	for (size_t i = 0; i < 7; i++)
	{
		std::cout << ch;
	}
}
