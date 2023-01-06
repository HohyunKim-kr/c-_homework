#include <iostream>
#define elements 4
int main()
{
	int arr[elements] = {1,2,3,4};
	int arr2[4];
	int count = 0;

	for (int i = 0; i < 4; i++)
	{
		std::cin >> arr2[i];	
	}

	for (int i = 0; i < elements; i++)
	{
		if (*(arr+i) == *(arr2+i))
		{
			count++;
			if(count == elements)
			{
				std::cout << "로그인성공";
			}
		}
	}
	


	
	return 0;
}