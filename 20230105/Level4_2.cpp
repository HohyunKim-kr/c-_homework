#include<iostream>

int main()
{
	int arr[5] = { 4,1,3,6,9 };
	int input;

	std::cin >> input;

	std::cout << input << "번index의값은" << arr[input] << "입니다";
	
	return 0;
}