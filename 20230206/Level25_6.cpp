#include<iostream>

struct NODE
{
	char ch = NULL;
	NODE* next = nullptr;
};

int main()
{
	NODE* head = nullptr;
	NODE* P1 = new NODE;
	NODE* P2 = new NODE;
	NODE* P3 = new NODE;
	NODE* P4 = new NODE;
	NODE* P5 = new NODE;
	head = P1;

	P1->ch = 'Q';
	P2->ch = 'T';
	P3->ch = 'P';
	P4->ch = 'K';
	P5->ch = 'Q';

	P1->next = P2;
	P2->next = P3;
	P3->next = P4;
	P4->next = P5;

	while (head == nullptr)
	{
		head = head->next;
	}
	std::cout << head->ch;


	

	return 0;
}