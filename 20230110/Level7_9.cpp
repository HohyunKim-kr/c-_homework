#include<iostream>

int main()
{
	int score[5];


	for (int i = 0; i < 5; i++)
	{
		std::cin >> score[i];
		std::cout << i + 1 << "번사람은" << score[i] << "점";
		if (score[i] >= 70)
		{
			std::cout << "PASS\n";
		}
		else if (score[i] < 70 && score[i] >= 50)
		{
			std::cout << "RETEST\n";
		}
		else
		{
			std::cout << "FAIL\n";
		}


	}


	
	return 0;
}