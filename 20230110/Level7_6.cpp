#include<iostream>

int main()
{
	int input = 0;

	for (int i = 0; i < 4; i++)
	{
		std::cin >> input;

		if (input < 20)
		{
			std::cout << "더 큰수를 입력하세요\n";
		}
		else if (input > 20)
		{
			std::cout << "더 작은수를 입력하세요\n";
		}
		else
		{
			std::cout << "정답입니다\n";
		}
	}

	return 0;
}