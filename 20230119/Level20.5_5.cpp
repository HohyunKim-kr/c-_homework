#include<iostream>

int main()
{
	char ch;

	std::cin >> ch;

	for (int i = -3; i < 3; i++)
	{
		if (ch + i > 'Z')
		{
			ch -= 26;
		}
		if (ch + i < 'A')
		{
			ch += 26;
		}
		std::cout << (char)(ch+i);
	}

	return 0;
}