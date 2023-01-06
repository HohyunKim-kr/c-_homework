#include <iostream>

int main()
{
	int a = 0; 
	int x = 0;
	
	std::cin >> a >> x;
	
	for (int i = 1; i <= x; i++)
	{
		std::cout << a - i << " ";
	}

	return 0;
}