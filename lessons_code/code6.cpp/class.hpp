
class MyCustomClass
{
private:
	int _a;
	int _b;
	int _c;

public:
	MyCustomClass(int a, int b, int c);
	void showInfo();
};

//! создать класс, позволяющий выводить в консоль числа с форматированием

//! интерфейс:  print(int a, string prefix = " ")
//! 			doublePrint(int a, string prefix = " ")
//! 			multiplePrint(int a, string prefix = " ", int times = 10)

//! реализовать две последних функции c помощью цикла while

//! в файле main.cpp в main() создать объект класса 
 //! и вызвать все три метода с различными значениями
