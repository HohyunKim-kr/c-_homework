#include<iostream>

int main()
{
	char str[3][5] = { {'A','B','C','D','E'},{'E','A','B','A','B'},{'A','C','D','E','R'}};
	char tmp;
	int count = 0;

	std::cin >> tmp;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (str[i][j] == tmp)
			{
				count++;
			}
		}
	}

	if (tmp >= 3)
	{
		std::cout << "��߰�";
	}
	else if (tmp == 1 || tmp == 2)
	{
		std::cout << "�߰�";
	}
	else if (tmp == 0)
	{
		std::cout << "�̹߰�";
	}

	return 0;
}