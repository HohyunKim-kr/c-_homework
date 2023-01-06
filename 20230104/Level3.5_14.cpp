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
			std::cout << "비밀번호가 틀렸습니다";
		}
		else
		{
			std::cout << "로그인성공";
		}
	}
	else
	{
		std::cout << "아이디가 틀렸습니다";
	}
	return 0;
}