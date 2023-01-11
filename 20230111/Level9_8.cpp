#include<iostream>

void BBQ(int _a, int _b);

int main()
{
	int a, b;

	std::cin >> a >> b;
	BBQ(a, b);

	return 0;
}

void BBQ(int _a, int _b)
{
	int sum = 0;
	int minus = 0;
	int multiple = 0;
	int divide = 0;

	sum = _a + _b;
	minus = _a - _b;
	multiple = _a * _b;
	divide = _a / _b;

	std::cout << "ÇÕ:" << sum << std::endl;
	std::cout << "Â÷:" << minus << std::endl;
	std::cout << "°ö:" << multiple << std::endl;
	std::cout << "¸ò:" << divide << std::endl;

}