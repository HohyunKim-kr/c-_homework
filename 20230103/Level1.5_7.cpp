#include <iostream>

int main()
{
	int a = 10;
	int b = 3;

	int multiple;
	int divide;

	multiple = a * b;
	divide = a / b;

	std::cout << "10 * 3 = " << multiple << std::endl;
	std::cout << "10 / 3 = " << divide << std::endl;

	return 0;
}