#include<iostream>

int main()
{
	char ch[3];

	int counting = 0;

	for (int i = 0; i < 3; i++)
	{
		std::cin >> ch[i];
		
		if (ch[i] >= 'A' && ch[i] < 'Z')
		{
			counting++;
		}
	}

	if (counting == 3)
	{
		std::cout << "풍족하다";
	}
	else if(counting >=1 && counting < 3)
	{
		std::cout << "적절하다";
	}
	else
	{
		std::cout << "부족하다";
	}

	return 0;
}