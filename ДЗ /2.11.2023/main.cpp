
#include <iostream>
//! заменить int choice на enum CHOICE
enum CHOICE
{
	first,
	second,
	third,
	fourth
};
namespace HOMEWORK
{
	bool selector(CHOICE choice, int message);
	void first(int m);
	void second(int m);
	void third(int m);
	void fourth(int m);
}

void HOMEWORK::first(int m)
{
	std::cout << "<" << m << ">";
}
void HOMEWORK::second(int m)
{
	std::cout << '"' << m << '"';
}
void HOMEWORK::third(int m)
{
	std::cout << '(' << m << ')';
}
void HOMEWORK::fourth(int m)
{
	std::cout << '{' << m << '}';
}

bool HOMEWORK::selector(CHOICE choice, int message)
{
	switch (choice)
	{
	case 0:
		HOMEWORK::first(message);
		break;
	case 1:
		HOMEWORK::second(message);
		break;
	case 2:
		HOMEWORK::third(message);
		break;
	case 3:
		HOMEWORK::fourth(message);
		break;
	default:
		std::cout << "ERROR";
		break;
	}

	if (message >= 0 && message <= 150)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	std::cout << HOMEWORK::selector(CHOICE::first, 100); // true
	std::cout << std::endl;
	std::cout << HOMEWORK::selector(CHOICE::second, 0);
	std::cout << std::endl;
	std::cout << HOMEWORK::selector(CHOICE::third, 99999);
	std::cout << std::endl;
	std::cout << HOMEWORK::selector(CHOICE::fourth, 42);
	std::cout << std::endl;
	std::cout << HOMEWORK::selector(CHOICE::first, 200); // true
	std::cout << std::endl;
	return 0;
	//! в пространстве имен HOMEWORK объявить 5 функций:
	//! bool selector(int option, int message)
	//! void first(int m)
	//! void second(int m)
	//! void third(int m)
	//! void fourth(int m)

	//! вне пространства имен HOMEWORK определить функции таким образом:
	//! при вызове first() должно выводится значение m, окруженное < >
	//! при вызове second() должно выводится значение m, окруженное " "
	//! при вызове third() должно выводится значение m, окруженное ( )
	//! при вызове fourth() должно выводится значение m, окруженное { }

	//! при вызове selector() :
	//! если choice равен 0 : вызвать first(message)
	//! если choice равен 1 : вызвать second(message)
	//! если choice равен 2 : вызвать third(message)
	//! если choice равен 3 : вызвать fourth(message)
	//! если choice не подходит не под одно условие, то вывести сообщение "ERROR"
	//! если значение message не находится в диапазоне от 0 до 150, вернуть значени true, иначе - false

	//! в функции main() вызвать функцию selector c различными значениями

	//! заменить int choice на enum CHOICE
}
