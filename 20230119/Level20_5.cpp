#include<iostream>

char arr[6] = {};
void Output(int a);

int main()
{
	std::cin >> arr;

	Output(0);

	return 0;
}

void Output(int a)
{
	std::cout << arr[a] << " ";
	if (a < 4)
	{
		Output(a + 1);
	}
	else
	{
		std::cout << std::endl;
	}
	std::cout << arr[a] << " ";
}