#include<iostream>

int sum(int a, int b);
int comp(int a, int b);
void print(int t1, int t2);

int main()
{
	int a, b;

	std::cin >> a >> b;

	int t1 = sum(a, b);
	int t2 = comp(a, b);
	print(t1, t2);

	return 0;
}

int sum(int a, int b)
{
	return a + b;
}
int comp(int a, int b)
{
	return a - b;
}
void print(int t1, int t2)
{
	std::cout << "ÇÕ:" << t1 << "\nÂ÷:" << t2;
}
