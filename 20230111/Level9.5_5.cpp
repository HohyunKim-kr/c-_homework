#include<iostream>

char str[2][4] = {};
int cntUp = 0;
int cntLow = 0;

void input();
void findUpper();
void findLower();

int main()
{

	input();
	findUpper();
	findLower();

	return 0;
}

void input()
{
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cin >> str[i][j];
		}
	}
}

void findUpper()
{
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (str[i][j] >= 'A' && str[i][j] <= 'Z')
			{
				cntUp++;
			}
		}
	}
	std::cout << "대문자" << cntUp << "개" <<std::endl;
}
void findLower()
{
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (str[i][j] >= 'a' && str[i][j] <= 'z')
			{
				cntLow++;
			}
		}
	}
	std::cout << "소문자" << cntLow << "개" << std::endl;
}