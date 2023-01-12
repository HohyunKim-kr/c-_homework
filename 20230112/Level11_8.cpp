#include<iostream>

int main()
{

	char ch[13] = {'S','t','r','u','c','t','P','o','i','n','t','e','r'};

	char x;
	bool flag;

	std::cin >> x;

	for (int i = 0; i < 13; i++)
	{
		if (ch[i] == x)
		{
			flag = true;
			break;
		}
		else 
		{
			flag = false;
		}
	}

	if (flag)
	{
		std::cout << "발견";
	}
	else
	{
		std::cout << "미발견";
	}


	return 0;
}