#include<iostream>

int main()
{
	int arr[8] = { 5,9,4,6,1,5,8,9 };
	int index;
	int Target;
	int Offset;
	
	std::cin >> index >> Target;

	for (size_t i = index; i < 8; i++)
	{
		if (arr[i] == Target)
		{
			Offset = i - index;
		}
	}

	std::cout << Offset;

	return 0;
}