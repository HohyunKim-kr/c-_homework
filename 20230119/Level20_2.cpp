#include<iostream>

void Countdown(int _n);

int main()
{
	int n = 0;

	std::cin >> n;

	Countdown(n);


	return 0;
}

void Countdown(int _n)
{
	std::cout << _n << " ";
	if (_n == 0)
	{
		return;
	}
	Countdown(_n - 1);
	std::cout << _n << " ";
}