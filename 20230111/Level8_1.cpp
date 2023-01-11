#include<iostream>

int main()
{
	int n;
	int i = 0;

	std::cin >> n;

	while (i < n)
	{
		std::cout << i + 1;
		i++;
	}
	return 0;
}