#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>

#include<cstring >
int main()
{
	char str[3][11] = { };
	
	int longT = 0;
	char tmp[11];

	for(size_t i = 0; i < 3; i++)
	{
		std::cin >> str[i];
	}

	for (size_t i = 0; i < 2; i++)
	{
		if (strlen(str[i]) < strlen(str[i + 1]))
		{
			longT = strlen(str[i + 1]);
			strcpy(tmp, str[i + 1]);
			strcpy(str[i + 1], str[0]);
			strcpy(str[0], tmp);
		}
	}

	for (size_t i = 0; i < 3; i++)
	{
		std::cout << str[i] << std::endl;
	}

	return 0;
}
