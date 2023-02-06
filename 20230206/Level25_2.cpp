#include<iostream>

int main()
{
	char* a = new char;
	char* b = new char;
	char* c = new char;

	std::cin >> *a >> *b >> *c;

	if (('a' <= *a && 'z' >= *a) ||
		('a' <= *b && 'z' >= *b) ||
		('a' <= *c && 'z' >= *c)) std::cout << "소문자있음";
	else std::cout << "모두대문자";

	delete a;
	delete b;
	delete c;

	return 0;
}