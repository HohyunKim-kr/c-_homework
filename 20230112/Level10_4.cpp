#include<iostream>

void even(int value);
void odd(int value);
void printData(int value);

int main()
{
	int a, b;

	std::cin >> a >> b;
	
	if ((a / b) % 2 == 0)
	{
		even(a / b);
	}
	else
	{
		odd(a / b);
	}
	std::cout << std::endl;
	printData(a + b);
	return 0;
}

void even(int value)
{
	printData(value * 2);
}
void odd(int value)
{
	printData(value - 10);
}

void printData(int value)
{
	std::cout << value;
}
