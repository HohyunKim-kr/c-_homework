#include<iostream>

void BBQ(int a);

int main()
{
	// BBQ���� 2�� ȣ�� ���
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