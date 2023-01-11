#include<iostream>

int main()
{
	char str[6] = { '#','_','#','_' ,'#','#' };


	for (int i = 0; i < 6; i++)
	{
		if (str[i] == '#')
		{
			std::cout << "¼¥";

		}
		if (str[i] == '_')
		{
			std::cout << "¹«";
		}
	}
	return 0;
}