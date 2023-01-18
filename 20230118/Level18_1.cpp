#include<iostream>

int main()
{
	char cardList[16] = {};
	int dat[256] = { 0 ,};
	int count = 0;

	std::cin >> cardList;

	for (size_t i = 0; i < 16; i++)
	{
		if (cardList[i] != '\0')
		{
			char ch = cardList[i];
			dat[ch] += 1;
		}
		// char ch = cardList[i];
		// dat[ch] += 1;
		//bucket[ch]++;
	}
	for (size_t i = 0; i < 256; i++)
	{
		if (dat[i] != 0)
		{
			count++;
		}
	}

	std::cout << count << "°³";

	return 0;
}