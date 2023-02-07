#include<iostream>

int main()
{
	int n = 0;

	int tmp1;
	int tmp2;
	int tmp3;
	int tmp4;

	std::cin >> n;

	tmp1 = n / 35; // 4°³
	tmp2 = (n - (tmp1 * 35)) / 17; //24
	tmp3 = (n - (tmp1 * 35) - (tmp2 * 17)) / 7;
	tmp4 = (n - (tmp1 * 35) - (tmp2 * 17) - (tmp3 * 7)) / 1;


	std::cout << "35:" << tmp1 << std::endl;
	std::cout << "17:" << tmp2 << std::endl;
	std::cout << "7:" << tmp3 << std::endl;
	std::cout << "1:" << tmp4 << std::endl;


	return 0;
}