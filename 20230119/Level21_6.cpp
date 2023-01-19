#include<iostream>
int counting = 0;
void Recursive(int branch, int level);

int main()
{
	int branch;
	int level;

	std::cin >> branch >> level;

	Recursive(branch, level);
	std::cout << counting;
	return 0;
}

void Recursive(int level, int branch)
{
	if (level != 0)
	{
		counting++;
		for (size_t i = 0; i <= branch; i++)
		{
			Recursive(level - 1, branch);
		}
	}
	// counting++;
}