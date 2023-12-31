﻿

enum LOGO
{
	TOYOTA,	  // = 0
	BMW,	  // = 1
	LADA,	  // = 2
	PEUGEOT,  // = 3
	DEFAULT_L // = 4
};

enum TYPE
{
	CARGO,
	PASSENGER,
	DEFAULT_T
};

class Car
{
private:
	LOGO _logo;
	int _age;
	int _size[3];
	int _passenger_count;
	double _gas_consumption;
	TYPE _type;
	int _ID;

public:
	LOGO logo(LOGO logo = DEFAULT_L)
	{
		if(logo == DEFAULT_L)
		{
			return _logo;
		}
		else
		{
			if(TOYOTA < logo && logo < PEUGEOT)
				_logo = logo;
			return _logo;
		}
	}
};

//! создать класс, описывающий объект Автомобиль и имеющий поля :

//! приватные :
//! перечисление марка {TOYOTA, BMW, LADA, PEUGEOT}
//! возраст
//! размер (массив из трех чисел)
//! пассажировместивость
//! расход топлива
//! перечисление тип {ГРУЗОВАЯ, ЛЕГКОВАЯ}
//! ID текущего владельца

//! публичные :
//! методы, редактирующие приватные поля и имеющие аргументы по умолчанию
//! если при вызове метода используется аргумент по умолчанию,
//! то сразу должно возвращаться значения поля
//! иначе поле сначало редактируется, потом отредактированное значение возвращается
//! в теле метода должны проводится проверки на "адекватность"(возможность) переданных аргументов,
//! если проверка не пройдена -- ничего не редактируется, выводится предупреждение в консоль
//! и возвращается текущее "валидное" значение поля

//! создать метод, выводящий на экран значения всех приватных полей класса (пример: "возраст {11 лет}")

//! в функции main():

//! создать 4 различных объекта класса Автомобиль, присвоить значения полям и вывести значения
//! далее изменить некоторые характеристик машин и заново вывести значения