#include<iostream>

struct pos
{
	int x;
	int y;
};

int main()
{
	pos* p[6] = { };
	memset(&p, 0, sizeof(pos));

	for (size_t i = 0; i < 6; i++)
	{
		std::cin >> p[i]->x >> p[i]->y;
	}

	return 0;
}