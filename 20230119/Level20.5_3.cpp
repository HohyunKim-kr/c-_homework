#include<iostream>
#include <cstring>
int main()
{
	std::string str;
	std::cin >> str;
	
	int t;
	int cnt = 0;

	if (str.length() % 2 == 0)
	{
		t = str.length() / 2;
	}
	else
	{
		t = str.length() / 2 - 1;
	}


	for (int i = 0; i < t; i++)
	{
		for (int j = t; j < str.length(); j++)
		{
			if (str[i] == str[j])
				cnt++;
		}
	}
	
	if (cnt >= str.length()/2) std::cout << "������ ����";
	else std::cout << "�ٸ�����";


	return 0;
}

