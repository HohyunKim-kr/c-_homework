#include<iostream>

int main()
{
	char* a = new char;
	char* b = new char;
	char* c = new char;

	std::cin >> *a >> *b >> *c;

	if (('a' <= *a && 'z' >= *a) ||
		('a' <= *b && 'z' >= *b) ||
		('a' <= *c && 'z' >= *c)) std::cout << "�ҹ�������";
	else std::cout << "��δ빮��";

	delete a;
	delete b;
	delete c;

	return 0;
}