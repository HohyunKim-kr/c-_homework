#include<iostream>

int main()
{
	int bucket[4] = { };

	char arr[4][5] =
	{
		"#AFG",
		"B##E",
		"###D",
		"#E##"
	};


	for (size_t j = 0; j < 4; j++)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (arr[i][j] != '#') bucket[j]++;
		}
	}

	for (size_t i = 0; i < 4; i++)
	{
		std::cout << bucket[i] << " ";
	}



	return 0;

}