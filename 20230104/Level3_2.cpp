#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;
	if (a >= b)
	{
		std::cout << "큰수는 " << a;
	}
	else
	{
		std::cout << "큰수는 " << b;
	}
	return 0;
}