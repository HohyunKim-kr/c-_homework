#include<iostream>

int main()
{
	int score = 0;

	std::cin >> score;
	if (score >= 80)
	{
		std::cout << "��";
	}
	else if (score >= 70 && score < 80)
	{
		std::cout << "��";
	}
	else if (score >= 60 && score < 70)
	{
		std::cout << "��";
	}
	else
	{
		std::cout << "��õ�";
	}
	return 0;
}