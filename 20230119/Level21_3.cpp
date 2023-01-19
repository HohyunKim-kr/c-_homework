#include<iostream>

void Recursive(int level, int branch);

int main()
{
	int level = 0;
	int branch = 0;

	std::cin >> level >> branch;

	Recursive(level, branch);


	return 0;
}

void Recursive(int level, int branch)
{
	if (level != 0)
	{
		for (size_t i = 0; i < branch; i++)
		{
			Recursive(level - 1, branch);
		}
	}
	else
	{
		return;
	}
}
