#include <iostream>
#include <clocale>

int main()
{
	//! в функции main() создать цикл, обрабатывающий массив символов char (строку)
	//! символы в строке должны быть разного регистра (высоты)
	//! в цикле должна производиться проверка строки на содержание английских и русских букв
	//! при наличии таких букв должны выводится значения соответствующих флагов (прим. "наличие ру букв - true"
	//! "наличие англ букв - true")

	//! после этого должно выводится общее колличество символов в строке,
	//! колличество ру букв, колличество англ букв
	//! колличество заглавны букв, колличество строчных букв

	char str[30] = "000АБВгде!ABCdef0000000";

	bool rus_flag{false};
	bool eng_flag{false};

	int count_all{0};
	int count_rus{0};
	int count_eng{0};

	int count_capital{0};
	int count_small{0};

	bool end_reached{false};

	for (int i{0}; i < 30; ++i)
	{
		if (str[i] == '\0')
		{
			end_reached = true;
		}
		if (!end_reached && 'а' <= str[i] && str[i] <= 'я')
		{
			rus_flag = true;
			++count_small;
			++count_rus;
		}
		if (!end_reached && 'a' <= str[i] && str[i] <= 'z')
		{
			eng_flag = true;
			++count_small;
			++count_eng;
		}
		if (!end_reached && 'А' <= str[i] && str[i] <= 'Я')
		{
			rus_flag = true;
			++count_capital;
			++count_rus;
		}
		if (!end_reached && 'A' <= str[i] && str[i] <= 'Z')
		{
			eng_flag = true;
			++count_capital;
			++count_eng;
		}
		if(!end_reached)
		{
			++count_all;
		}
	}
	std::cout << str[1];
	std::cout << str << std::endl;
	// std::cout << "наличие ру букв - " << std::boolalpha << rus_flag << std::endl;
	// std::cout << "колличество ру букв - " <<  count_rus << std::endl;
	std::cout << "наличие англ букв - " << std::boolalpha << eng_flag << std::endl;
	std::cout << "колличество англ букв - " << count_eng << std::endl;
	std::cout << "колличество колличество заглавных букв - " << count_capital << std::endl;
	std::cout << "колличество колличество строчных букв - " << count_small << std::endl;
	std::cout << "общее колличество символов - " << count_all << std::endl;

	for (int i{}; i < 30; ++i)
	{
		std::wcout << i << " " << str[i] << std::endl;
	}
}
