#include <iostream>

int main()
{
	int a[4];
	int sum = 0;
	int avg;

	for (int i = 0; i < 4; ++i)
	{
		std::cin >> a[i];
		sum += a[i];
	}

	avg = sum / 4;

	for (int i = 0; i < 4; ++i)
	{
		if (avg > a[i])
		{
			std::cout << a[i] << "<" << avg << std::endl;
		}
		else if (avg == a[i])
		{
			std::cout << a[i] << "==" << avg << std::endl;
		}
		else
		{
			std::cout << a[i] << ">" << avg << std::endl;
		}
	}
	
	return 0;
}
