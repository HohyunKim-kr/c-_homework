#include<iostream>

int main()
{
	int a; 
	int b;

	std::cin >> a >> b;

	if (abs(a - b) > 5)
	{
		std::cout << "�ִ�";
	}
	else
	{
		std::cout << "������";
	}
	return 0;
}