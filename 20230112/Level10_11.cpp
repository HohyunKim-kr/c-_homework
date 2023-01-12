#include<iostream>
char scoring();
int main()
{
	std::cout << scoring();

	return 0;
}

char scoring()
{
	int score;

	std::cin >> score;

	if (score >= 90)
	{
		return 'A';
	}
	else if (score >= 80 && score < 90)
	{
		return 'B';
	}
	else if (score >= 70 && score < 80)
	{
		return 'C';
	}
	else
	{
		return 'D';
	}
}