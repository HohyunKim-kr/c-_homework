#include <iostream>

void bbq(int t)
{
	if (t >= 3)
	{
		return;
	}
	bbq(t + 1);
	return;
}

int main()
{
	bbq(0);
	return 0;
}
