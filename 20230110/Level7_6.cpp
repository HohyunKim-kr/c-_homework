#include<iostream>

int main()
{
	int input = 0;

	for (int i = 0; i < 4; i++)
	{
		std::cin >> input;

		if (input < 20)
		{
			std::cout << "�� ū���� �Է��ϼ���\n";
		}
		else if (input > 20)
		{
			std::cout << "�� �������� �Է��ϼ���\n";
		}
		else
		{
			std::cout << "�����Դϴ�\n";
		}
	}

	return 0;
}