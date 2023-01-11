#include<iostream>

int a, b;
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
	std::cin >> a >> b;
}
void output()
{
	int sum = a + b;
	int i = 5;

	while (i <= sum)
	{
		std::cout << i << "  ";
		i++;
	}
}
