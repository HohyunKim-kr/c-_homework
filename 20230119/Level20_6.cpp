#include<iostream>

int a;
int b;

void Output(int a);

int main()
{
	std::cin >> a >> b;
	
	Output(a);

	return 0;
}

void Output(int a)
{
	
	if (a < b)
	{
		std::cout << a << " ";
		Output(a + 1);
	}
	std::cout << a << " ";
}
