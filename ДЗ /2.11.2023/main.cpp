
int main()
{
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
	//! если choice не подходит нb под одно условие, то вывести сообщение "ERROR"
	//! если значение message не находится в диапазоне от 0 до 150, вернуть значени true, иначе - false

	//! в функции main() вызвать функцию selector c различными значениями 

	//! заменить int choice на enum CHOICE
}