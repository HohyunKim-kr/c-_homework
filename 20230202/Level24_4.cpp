#include<iostream>

struct NODE
{
	int x;
	NODE* next;
};

int main()
{
	NODE a;
	NODE b;
	NODE c;

	a.x = 3;
	a.next = &b;
	b.x = 5;
	b.next = &c;
	c.x = 4;
	c.next = nullptr;

	return 0;
}