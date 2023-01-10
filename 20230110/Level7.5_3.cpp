#include<iostream>

void input(char *a,char * b);
void output(char* a, char* b);

int main()
{
	char ch1;
	char ch2;

	input(&ch1, &ch2);
	output(&ch1, &ch2);


	return 0;
}

void input(char* a, char* b)
{
	std::cin >> *a >> *b;
}
void output(char* a, char* b)
{
	if ((*a >= 'A' && *a <= 'Z') && (*b >= 'A' && *b <= 'Z'))
	{
		std::cout << "대문자들";
	}
	else if ((*a >= 'A' && *a <= 'Z') || (*b >= 'A' && *b <= 'Z'))
	{
		std::cout << "대소문자";
	}
	else
	{
		for (int i = 'a'; i <= 'z'; i++)
		{
			std::cout << (char)(i);
		}
	}

}
