#include<iostream>

int main()
{
	char ch[3];

	int counting = 0;

	for (int i = 0; i < 3; i++)
	{
		std::cin >> ch[i];
		
		if (ch[i] >= 'A' && ch[i] < 'Z')
		{
			counting++;
		}
	}

	if (counting == 3)
	{
		std::cout << "ǳ���ϴ�";
	}
	else if(counting >=1 && counting < 3)
	{
		std::cout << "�����ϴ�";
	}
	else
	{
		std::cout << "�����ϴ�";
	}

	return 0;
}