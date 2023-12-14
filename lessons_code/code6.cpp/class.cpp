#include "class.hpp"

#include <iostream>


MyCustomClass::MyCustomClass(int a, int b, int c)
{
	_a = a;
	_b = b;
	_c = c;
}

void MyCustomClass::showInfo()
{
	std::cout << _a << " " << _b << " " << _c << std::endl;
}
