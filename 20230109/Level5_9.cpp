#include<iostream>

char arr[3] = {'A','B','C'};
void KFC();

int main()
{
	int a;

	std::cin >> a;

	for (int i = 0; i < a; i++)
	{
		KFC();
		std::cout << std::endl;
	}


	return 0;
}

void KFC()
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << arr[i];
	}
}