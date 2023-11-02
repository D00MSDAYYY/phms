#include <iostream> 


int main()
{
	// float temp[10];
	// std::cout << "enter temperature" << std::endl;

	// for (int i{0}; i < 10; ++i)
	// {
	// 	std::cin >> temp[i];
	// }

	// std::cout << "----" << std::endl;

	// for (int i{0}; i < 10; ++i)
	// {
	// 	std::cout <<  temp[i] << std::endl;
	// }

	// bool score[7];

	// std::cout << "enter scores" << std::endl;

	// for (int i{0}; i < 7; ++i)
	// {
	// 	std::cin >> score[i];
	// }

	// for (int i{0}; i < 7; ++i)
	// {
	// 	std::cout << score[i] << std::endl;
	// }

	// std::cout << "enter index" << std::endl;
	// int index{};
	// std::cin >> index;
	// for (int i{index}; i < 7; ++i)
	// {
	// 	std::cout << score[i] << std::endl;
	// }
	// char str[20] = "hello world";
	// for (int i{0}; i < 20; ++i)
	// {
	// 	std::cout << str[i];
	// }
	// std::cout << str;
	// str[10] = 'q';
	// str[11] = 'q';
	// str[12] = 'q';
	// str[13] = 'q';
	// std::cout << str;

	//! инициализировать массив-строку str с типом char значением английского предложения
	//! создать переменные-счетчики букв a, o, e
	//! посчитать колличество букв a, o, e  в  str, записать значения в счетчики
	//! вывести значения счетчиков на экран

	// char str[100] = "aaaaaoee";

	// int a_count{0};
	// int o_count{0};
	// int e_count{0};

	// for (int i{0}; i < 100; ++i)
	// {
	// 	switch (str[i])
	// 	{
	// 	case 'a':
	// 		++a_count;
	// 		break;
	// 	case 'o':
	// 		++o_count;
	// 		break;
	// 	case 'e':
	// 		++e_count;
	// 		break;
	// 	default:
	// 		break;
	// 	}
	// }
	// std::cout << "count a = " << a_count << std::endl;
	// std::cout << "count o = " << o_count << std::endl;
	// std::cout << "count e = " << e_count << std::endl;

	//! создать строку str и присвоить ей значение 0001102121
	//! с помощью цикла заменить значения в строке str так:
	//! если символ изначально равен 0 : заменить на 3
	//! если символ изначально равен  1 : заменить на 5
	//! если  символ изначально равен 2 : заменить на 9

	//! вывести получившуюся строчку

	char str[100] = "010121212120010011";
	std::cout << str << std::endl;
	for (int i{0}; i < 100; ++i)
	{
		switch (str[i])
		{
		case '0':
			str[i] = '3';
			break;
		case '1':
			str[i] = '5';
			break;
		case '2':
			str[i] = '9';
			break;
		default:
			break;
		}
	}
	std::cout << str;
}