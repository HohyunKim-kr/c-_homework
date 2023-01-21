#include<iostream>

#include<iostream>

int main()
{
	char str[7] = "DTABWQ";

	char alias; 
	
	std::cin >> alias;

	for (size_t i = 0; i < 7; i++)
	{
		if (str[i] == alias)
		{
			std::cout << i <<"¹ø INDEX";
		}
	}

	return 0;
}