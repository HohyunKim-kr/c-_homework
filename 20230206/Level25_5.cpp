#include<iostream>

struct NODE
{
	int data = 0;
	NODE* next = nullptr;
};

void run(NODE * head)
{
	while (head != nullptr)
	{
		if (head->data != 0) std::cout << head->data << " ";
		head = head->next;
	}
}

int main()
{
	NODE* head = nullptr;
	NODE* P1 = new NODE;
	NODE* P2 = new NODE;
	NODE* P3 = new NODE;
	NODE* P4 = new NODE;
	head = P1;

	P1->data = 3;
	P2->data = 5;
	P3->data = 4;
	P4->data = 2;

	P1->next = P2;
	P2->next = P3;
	P3->next = P4;
	

	
	run(head);




	return 0;
}