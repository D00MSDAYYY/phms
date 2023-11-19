#include <iostream>

void print(char ch = 'y', int num = 5, char prefix = '/')
{
	std::cerr << prefix << " ";
	for (int i{0}; i < num; ++i)
	{
		std::cerr << ch << " ";
	}
	std::cerr << prefix;
	std::cerr << std::endl;
}

void print(char *str, int num)
{
	int i{0};
	while (num)
	{
		std::cerr << *(str + i);
		++i;
		--num;
	}
	std::cerr  << std::endl;
}

void print(double a, double b)
{
	std::cerr << a + b << std::endl;
}

int main()
{
	print('q', 3, '-');

	char str[15] = "hello world";
	print(&(str[0]), 5);

	print(2.35, 1.00003);

	//! создать 3 функции func()
	//! 1 : принимает целочисленные аргументы и выводит их через запятую
	//! 2 : принимает указатели на double и выводит их через точку с запятой
	//! 3 : не принимает никаких аргументов и выводит черту "---------------"

	// print('q', 3, '-');

	// print('a', 4);

	// print('w');

	// print();

	//! определить функцию divider(int a, int b)
	//! она должна иметь один аргумент по умолчанию, равный 4
	//! она должна делить a на b и выводить результат






}