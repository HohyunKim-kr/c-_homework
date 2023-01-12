#include<iostream>

int main()
{
	char a, b, c;

	std::cin >> a >> b >> c;

	char* pA = &a;
	char* pB = &b;
	char* pC = &c;

	std::cout << ++*pA << " " << ++*pB << " " << ++*pC;


	return 0;
}