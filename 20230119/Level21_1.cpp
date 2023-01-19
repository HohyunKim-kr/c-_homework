#include<iostream>

void Play(int a);

int main()
{
	Play(2);

	return 0;
}

void Play(int a)
{
	if (a == 0)
	{
		return;
	}
	else
	{
		for (size_t i = 0; i < 3; i++)
		{
			// std::cout << a;
			Play(a-1);
		}
	}
	
}
