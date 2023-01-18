#include<iostream>

int main()
{
	char str[9] = {};
	int count[256] = { 0 };
	
	std::cin >> str;

	for (size_t i = 0; i < 9; i++)
	{
		count[str[i]]++;
	}
	int max = 0;
	int index = 0;
	for (size_t i = 0; i < 256; i++)
	{
		if (max < count[i])
		{
			max = count[i];
			index = i;
		}
	}
	std::cout << (char)index;

	return 0;
}