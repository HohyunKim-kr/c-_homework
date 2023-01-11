#include<iostream>

int main()
{
	char ch[3][3] = { 0 };

	int x1, x2;
	int y1, y2;
	char tmp;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> ch[i][j];
		}
	}

	std::cin >> y1 >> x1;
	std::cin >> y2 >> x2;

	tmp = ch[y1][x1];
	ch[y1][x1] = ch[y2][x2];
	ch[y2][x2] = tmp;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << ch[i][j];
		}
		std::cout << std::endl;
	}




	return 0;
}