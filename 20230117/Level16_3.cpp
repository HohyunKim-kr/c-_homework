#include<iostream>

int main()
{
	char str[6];
	int a = 0;

	std::cin >> str >> a;

	for (int i = 0; i < 6; i++)
	{
		char tmp;
		if (i == a)
		{
			tmp = str[i];
			str[i] = 'A';
			str[i]
			break;
		}
	}
	
		std::cout << str;
	



	return 0;
}