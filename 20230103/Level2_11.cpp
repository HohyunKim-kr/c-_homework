#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	if (num > 0)
	{
		for (int i = 0; i < 3; ++i)
		{
			std::cout << "###" << std::endl;
		}
	}
	else if(num < 0)
	{
		for (int i = 0; i < 2; ++i)
		{
			std::cout << "$$$" << std::endl;
		}
	}
	return 0;
}