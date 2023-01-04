#include <iostream>

int main()
{
	int a;
	int b;
	std::cin >> a >> b;

	if (a > b) std::cout << "a가b보다크다" << std::endl;
	else std::cout << "b가a보다같거나크다" << std::endl;

	return 0;
}