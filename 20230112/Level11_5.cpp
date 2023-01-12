#include<iostream>

int main()
{
	int a;
	int b;
	int tmp;

	std::cin >> a >> b;

	int* p = &a;
	int* t = &b;
	
	tmp = *p;
	*p = *t;
	*t = tmp;

	std::cout << a << " " << b;
	
	return 0;
}