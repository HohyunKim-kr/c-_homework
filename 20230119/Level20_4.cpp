#include<iostream>
int a; 

void jump(int a);

int main()
{
	std::cin >> a;

	jump(1);
	return 0;
}

void jump(int a)
{
	if (a < 4 )
	{
		jump(a + 1);
	}
	std::cout << 2*a -1 << " ";
}
