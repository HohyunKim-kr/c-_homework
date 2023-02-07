#include<iostream>

struct NODE
{
	int data = 0;
	NODE* next = nullptr;
};

NODE* head = nullptr;
NODE* tail = nullptr;

void Enqueue(int data)
{
	NODE* p = new NODE;
	p->data = data;
	if (head == nullptr) head = tail = p;
	else
	{
		head->next = p;
		head = head->next;
	}
}

void Dequeue(int data)
{
	if (head == tail)
	{
		head = nullptr;
		tail = nullptr;
	}
	else
	{
		NODE* p = tail;
		tail = tail->next;
		delete p;
	}
}

void Print()
{
	if (nullptr == head)
	{
		std::cout << "ERROR";
		return;
	}

	NODE* p = tail;
	while (p != nullptr)
	{
		std::cout << p->data << " ";
		p = p->next;
	}
}

int main()
{
	int n = 0;
	std::cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		char ch = 0;
		int data = 0;
		std::cin >> ch >> data;
		if (ch == 'E')
		{
			Enqueue(data);
		}
		else
		{
			Dequeue(data);
		}
	}
	Print();

	return 0;
}