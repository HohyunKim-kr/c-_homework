#include<iostream>

int main()
{
	char str[6];
	int bucket[6];
	int cnt = 0;

	std::cin >> str;


	for (size_t i = 0; i < 5; i++)
	{
		if (str[i] == 'A')
		{
			cnt++; 
		}
	}
	std::cout << "����A�� " << cnt << "�� �߰�\n";
	for (size_t i = 0; i < 5; i++)
	{
		if (str[i] == 'A')
		{
			std::cout << i << "��" << std::endl;
		}
	}

	return 0;
}