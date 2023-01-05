#include<iostream>

int main()
{
	int a; 
	std::cin >> a;

	for (int i = 0; i < 3; i++)
	{
		for(int j =0; j < 3; j++ )
		{
			std::cout << a ;
		}
		a++;
		std::cout << std::endl;
	}

	return 0;
}