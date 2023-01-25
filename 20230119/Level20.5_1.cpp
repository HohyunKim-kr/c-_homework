#include<iostream>

void BBQ(int a);

int main()
{
	// BBQ에서 2번 호출 재귀
	BBQ(2);


	return 0; 
}

void BBQ(int a)
{
	if (a == 0)
	{
		return;
	}
	BBQ(--a);
}