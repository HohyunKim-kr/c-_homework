#include<iostream>
struct NODE
{
	int a;
	NODE* right = nullptr;
	NODE* left = nullptr;
};

int main()
{
	NODE* P1 = new NODE;
	NODE* P2 = new NODE;
	NODE* P3 = new NODE;
	NODE* P4 = new NODE;

	P1->a = 3;
	P1->right = P2;
	P1->left = P3;

	P2->a = 6;
	P2->left = P4;

	P3->a = 7;
	
	P4->a = 2;

	delete P1;
	delete P2;
	delete P3;
	delete P4;

	return 0;
}