#include<iostream>

void KFC();
void MC();

int main()
{

	for (int i = 0; i < 10; i++)
	{
		KFC();
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		MC();
	}

	return 0;
}


void KFC()
{
	std::cout << "#";
}
void MC()
{
	std::cout << "@";
}
