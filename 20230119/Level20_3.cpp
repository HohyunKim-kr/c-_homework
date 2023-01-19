#include<iostream>
int arr[6];
void Micael(int a);

int main()
{
	for (size_t i = 0; i < 6; i++)
	{
		std::cin >> arr[i];
	}
	Micael(0);

	return 0;
}

void Micael(int a)
{
	std::cout << arr[a] << " ";
	if (a == 5)
	{
		return;
	}
	Micael(a + 1);
	std::cout << arr[a] << " ";
}
