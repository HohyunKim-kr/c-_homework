#include<iostream>

struct PROJECT 
{
	int num;
	char id;
	int vect[4] = { };
};

int main()
{
	PROJECT z;
	int a;

	std::cin >> a;

	if (a / 1 > 0 && a / 1 < 10)
	{
		z.num = 5;
		z.id = 'G';
		*z.vect = { 1,2,3,4 };
	}
	if (a / 10 > 9 && a / 10 < 100)
	{

	}
	if (a / 1 > 99 && a / 1 < 1000)
	{

	}
	

	return 0;
}