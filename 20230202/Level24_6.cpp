#include<iostream>

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a;
	int b;

	std::cin >> a >> b;

	swap(&a, &b);

	std::cout << a << " " << b;

	return 0;
}