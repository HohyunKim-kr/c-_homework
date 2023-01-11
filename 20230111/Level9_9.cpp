#include<iostream>

void findCh(char *_ch);

char str[2][3] = { {'F','E','W'},{'D','C','A'} };
int counting = 0;

int main()
{
	char ch;

	std::cin >> ch;

	findCh(&ch);

	return 0;
}
void findCh(char *_ch)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (str[i][j] == *_ch)
			{
				counting++;
			}
		}
	}

	if (counting != 0)
	{
		std::cout << "발견";
	}
	else
	{
		std::cout << "미발견";
	}
}