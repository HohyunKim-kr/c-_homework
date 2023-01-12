#include<iostream>

int main()
{
	int a = 0;
	int* p = &a;

	char gd;
	char* t = &gd;

	std::cin >> a >> gd;
	std::cout << *p <<" ";
	std::cout << *t;


	return 0;
}