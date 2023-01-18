#include<iostream>

int apt[5][3] =
{
	15,18,17,
	4,6,9,
	10,1,3,
	7,8,9,
	15,2,6
};

int family[3] = {};

void isPattern(int *arr);


int main()
{
	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> family[i];
	}

	isPattern(family);

}
void isPattern(int* arr)
{
	for (size_t i = 0; i < 5; i++)
	{
		if (apt[i][0] == arr[0] && apt[i][1] == arr[1] && apt[i][2] == arr[2])
		{
			std::cout << 5 - i << "Ãþ";
		}
	}
}