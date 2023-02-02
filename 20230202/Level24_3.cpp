#include<iostream>
#define _CRT_SERCURE_NO_WARNINGS

struct robot 
{
	int a;
	int b;

	char t[7] = {};
};

int main()
{
	robot p;

	memset(&p, 0, sizeof(struct robot));

	std::cin >> p.a >> p.b >> p.t;
	std::cout << p.a + p.b << " " << p.t;


	// p->a = 3;
	// p->b = 5;
	// strcpy(p->t, "supper");	
	// std::cin >> p->a >> p->b >> p->t;
	
	// std::cout << p->a + p->b << p->t;

	return 0;
}