#include<iostream>

struct NODE
{
	char ch = NULL;
	NODE* right = nullptr;
	NODE* left = nullptr;
};

char str[4] = { };
int n = 0;

void run(NODE * head)
{
	if (n > 2)
	{
		std::cout << head->ch;
		return;
	}
	if (str[n] == 'H')
	{
		n++;
		run(head);
	}
	else if (str[n] == 'L')
	{
		head = head->left;
		n++;
		run(head);
	}
	else if (str[n] == 'R')
	{
		head = head->right;
		n++;
		run(head);
	}
}

int main()
{
	NODE* head = nullptr;
	NODE* a = new NODE;
	NODE* b = new NODE;
	NODE* c = new NODE;
	NODE* d = new NODE;
	NODE* e = new NODE;
	head = a;

	a->ch = 'A';
	b->ch = 'B';
	c->ch = 'C';
	d->ch = 'D';
	e->ch = 'E';

	a->left = b;
	a->right = c;

	b->left = d;
	b->right = e;

	std::cin >> str;
	run(head);

	return 0;
}