#include<iostream>

struct ABC
{
	int data[4] = { 0 };
	int x = 0;
};

int main()
{
	ABC a = { {1,2,3,4},10 };
	ABC b{ {7,8,9,10},15 };

	ABC* p = &a;
	ABC* g = &b;

	for (size_t i = 0; i < 4; i++)
	{
		std::cout << p->data[i] << " ";
		
	}
	std::cout << std::endl;
	std::cout << p->x;
	std::cout << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << g->data[i] << " ";
	}
	std::cout << std::endl;
	std::cout << g->x;


	return 0;
}