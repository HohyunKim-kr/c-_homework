#include<iostream>

int main()
{
	int a; 
	int b;

	std::cin >> a >> b;

	if ((a - b) % 2 != 0)
	{
		std::cout << "����Ѵ�";
	}
	else
	{
		std::cout << "¦�����";
	}

	return 0;
}