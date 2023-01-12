#include<iostream>

int input();
void cals(int a, int b,int c);

int main()
{
	int x = input();
	int y = input();
	int z = input();

	cals(x,y,z);
	return 0;
}

int input()
{
	int a;
	std::cin >> a;
	return a;
}
void cals(int a, int b, int c)
{
	std::cout << a + b + c;
}
