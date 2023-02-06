#include<iostream>

struct NODE
{
	char name[15] = { };
	NODE* Love1 = nullptr;
	NODE* Love2 = nullptr;
};

int main()
{
	NODE* head = nullptr;
	NODE P1{ "boss" };
	NODE P2{ "wife" };
	NODE P3{ "son" };
	NODE P4{ "girlfriend" };
	NODE P5{ "boyfriend" };

	head = &P1;

	P1.Love1 = &P2;
	P1.Love2 = &P3;
	P2.Love1 = &P1;
	P2.Love2 = &P3;
	P3.Love1 = &P4;
	P3.Love2 = &P5;
	P4.Love1 = &P3;
	P4.Love2 = &P5;
	P5.Love1 = &P4;

	while (strcmp(head->name,"son") != 0 )
	{
		head =  head->Love2;
	}

	std::cout << head->Love1->name << std::endl;
	std::cout << head->Love2->name;

	return 0;
}