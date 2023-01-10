#include<iostream>

int main()
{
	int arr[6] = { 0 };
	int indexA;
	int indexB;
	int indexC;

	std::cin >> indexA >> indexB >> indexC;

	for (int i = 0; i < 6; i++)
	{
		if (i == indexA || i == indexB || i == indexC)
		{
			arr[i] = 1;
		}
	}
	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}