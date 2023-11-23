#include <iostream>

class MyClass
{
public:
	int _a;
	int _b;
	int *_ptr;
	int _c;

public:
	MyClass(int x, int y)
	{
		_a = x;
		_b = y;
		_c = 1;
		_ptr = new int[_c];
		std::cout << "constructor1 activated\n";
	}
	MyClass(int z)
	{
		_c = z;
		_ptr = new int[_c];
		std::cout << "constructor2 activated\n";
	}

	MyClass(const MyClass &another_obj)
	{
		_a = another_obj._a;
		_b = another_obj._b;

		_c = another_obj._c;
		_ptr = new int[_c];
		std::cout << "copy constructor activated\n";
	}
	void operator=(const MyClass &another_obj)
	{
		_a = another_obj._a;
		_b = another_obj._b;

		_c = another_obj._c;
		_ptr = new int[_c];
		std::cout << "assignment operator activated\n";
	}

	~MyClass()
	{
		delete[] _ptr;
		std::cout << "destrucor activated\n";
	}

	void print(int s = 0){};
};

int main()
{

	MyClass obj1();

	MyClass obj2(obj1);

	std::cout << obj1._a << std::endl;
	std::cout << obj2._a << std::endl;

	MyClass obj3(1, 2);

	obj3 = obj1;

	std::cout << obj3._a << std::endl;
}

//! создать класс custom_class
//! определить несколько приватных приватных полей
//! создать конструктор без аргументов (по умолчанию)
//! создать конструктор копирования (копирует с увеличением на 1 )
//! оператор присваивания  (копирует с уменьшением на 1 )