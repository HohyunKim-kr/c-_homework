#include<iostream>
struct Person
{
	int age;
	int height;
};

void input(Person *_a, Person *_b);
void output(Person *_a, Person * _b);

int main()
{
	Person a = {};
	Person b = {};

	input(&a,&b);
	output(&a, &b);


	return 0;
}

void input(Person  *_a, Person *_b)
{
	std::cin >> _a->age >> _a->height;
	std::cin >> _b->age >> _b->height;
}

void output(Person *_a, Person *_b)
{
	std::cout << (_a->age + _b->age) / 2 << " ";
	std::cout << (_a->height + _b->height) /2;
}
