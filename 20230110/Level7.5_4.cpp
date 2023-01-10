#include<iostream>

int main()
{
	char arr[5][3] = { 0, };
	char tmp;

	std::cin >> tmp;

	for (int i =0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = (char)(tmp++);
		}
	}

	char change = arr[2][2];

	if (change >= 'A' && change <= 'Z')
	{
		change = (char)(change - ('A' - 'a'));
	}

	std::cout << change;

	return 0;
}