#include<iostream>

int main()
{
	int a;
	int b;
	int sum;
	int multiple;

	std::cin >> a >> b;
	sum = a + b;
	multiple = a * b;

	if (sum > 10)
	{
		std::cout << "합만세" << std::endl;
	}
	if (multiple > 10)
	{
		std::cout << "곱만세" << std::endl;
	}

	return 0;
}