#include <iostream>


void printer(char ch, int height)
{
	for (int i{0}; i < height; ++i)
	{
		for (int j{-1}; j < i; ++j)
			std::cout << ch;
		std::cout << '\n';
	}
}
int main()
{
	//! создать функцию void printer(char ch, int height)
	//! при вызове функции на экран должен выводится треугольник, с высотой height,
	//! состоящий из закрашенный символами ch
	//! прим. printer(&, 4):
	//! &
	//! &&
	//! &&&
	//! &&&&
	printer('+', 5);
	printer('&', 20);
}