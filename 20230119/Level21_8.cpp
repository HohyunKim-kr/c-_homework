#include<iostream>

int main()
{
	int mouse[2] = {5,5};
	int n;

	char str[5][10] =
	{
		"up",
		"down",
		"left",
		"right",
		"click"
	};

	char input[10];

	std::cin >> n;


	for (size_t i = 0; i < n; i++)
	{
		std::cin >> input;

		if (strcmp(input,str[4]))
		{
			std::cout << mouse[0] << "," << mouse[1] << std::endl;
		}
		if (input == "up")
		{
			mouse[0] -= 1;
		}
		if (input == "down")
		{
			mouse[0] += 1;
		}
		if (input == "left")
		{
			mouse[1] -= 1;
		}
		if (input == "right")
		{
			mouse[1] += 1;
		}
	}

	return 0;
}