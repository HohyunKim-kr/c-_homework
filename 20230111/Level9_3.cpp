#include<iostream>

int main()
{
	char ch[6] = {'A','F','G','A','B','C'};

	char ch1, ch2;
	
	int count1 = 0;
	int count2 = 0;

	std::cin >> ch1 >> ch2;

	for (int i = 0; i < 6; i++)
	{
		if (ch[i] == ch1)
		{
			count1++;
		}
		if (ch[i] == ch2)
		{
			count2++;
		}
	}

	if (count1 > 0 && count2 > 0)
	{
		std::cout << "��2��";
	}
	else if (count1 > 0 || count2 > 0)
	{
		std::cout << "��1��";
	}
	if (count1 == 0 && count2 == 0)
	{
		std::cout << "��0��";
	}


	return 0;
}