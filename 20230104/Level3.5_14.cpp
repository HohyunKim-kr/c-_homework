#include<iostream>

int main()
{
	int id = 1111;
	int pwd = 2222;

	int idInput;
	int pwdInput;

	std::cin >> idInput >> pwdInput;

	if (id == idInput)
	{
		if (pwd != pwdInput)
		{
			std::cout << "��й�ȣ�� Ʋ�Ƚ��ϴ�";
		}
		else
		{
			std::cout << "�α��μ���";
		}
	}
	else
	{
		std::cout << "���̵� Ʋ�Ƚ��ϴ�";
	}
	return 0;
}