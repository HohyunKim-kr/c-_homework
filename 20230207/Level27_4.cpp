#include<iostream>

int main()
{
	char str[11];
	int bucket[96] = { 0 };
	int cnt = 0;
	std::cin >> str;

	for (size_t i = 0; i < 11; i++)
	{
		if (bucket[str[i]] == 0) bucket[str[i]]++;
	}
	for (size_t i = 1; i < 96; i++)
	{
		if (bucket[i] != 0) cnt++;
		
	}
	std::cout << cnt << "Á¾·ù";

	return 0;
}