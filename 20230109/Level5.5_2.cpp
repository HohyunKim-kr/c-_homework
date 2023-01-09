#include<iostream>

void KFC();
void BBQ();

int main()
{
	char ch;

	std::cin >> ch;

	if (ch == 'B')
	{
		KFC();
		std::cout << std::endl;
		BBQ();
	}
	if (ch == 'b')
	{
		BBQ();
	}
	if (ch == '7')
	{
		KFC();
	}
	return 0;
}

void KFC()
{
	std::cout << "KFC";
}
void BBQ()
{
	std::cout << "BBQ";
}