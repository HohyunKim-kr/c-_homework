#include<iostream> 

int main()
{
	int arr[6] = { 0, };

	for (size_t i = 0; i < 6; i++)
	{
	
			std::cin >> arr[i];
	}

	for (size_t i = 0; i < 6; i++)
	{
		if (arr[i] < 5)
		{
			std::cout << i << "����"<< arr[i]<< "�� ���հ�" << std::endl;
		}
		if (arr[i] >= 5)
		{
			std::cout << i << "����"<< arr[i]<<"�� �հ�" << std::endl;
		}


	}
	return 0;
}