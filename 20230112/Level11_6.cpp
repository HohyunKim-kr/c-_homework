#include<iostream>

int main()
{
	int arr[7] = { 3,4,1,3,2,7,3 };
	
	bool flag = false;

	int a;
	
	std::cin >> a;

	for (int i = 0; i < 7; i++)
	{
		if (arr[i] == a)
		{
			flag = true;
		}
		else
		{
			flag = false;
		}
	}

	if (flag)
	{
		std::cout << "발견";
	}
	else
	{
		std::cout << "미발견";
	}

	

	return 0;
}