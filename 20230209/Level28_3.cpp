#include<iostream>

int main()
{
	char arr[256] = { 0,'A','D','F','Z','C','G','Q','H'};

	char ch1, ch2;

	int ch1Index;
	int ch2Index;

	std::cin >> ch1 >> ch2;

	for (int i = 9; i < 255; i++)
	{
		if (ch1 == arr[i]) ch1Index = i;
		if (ch2 == arr[i]) ch2Index = i;
	}

	if (ch1Index * 2 == ch2Index || ch1Index * 2 + 1 == ch2Index || ch2Index * 2  == ch1Index ||ch2Index * 2 + 1 == ch1Index) 
		std::cout << "부모자식관계";
	else std::cout << "아님";

	return 0;
}