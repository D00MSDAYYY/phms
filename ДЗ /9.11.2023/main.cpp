

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

	char str[30] = "saasfsAAAafsda";

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
		if ('а' <= str[i] && str[i] <= 'я')
		{
			rus_flag = true;
			++
			++count_rus;
		}
		if ('a' <= str[i] && str[i] <= 'z')
		{
			eng_flag = true;
			++count_eng;
		}
		if ('А' <= str[i] && str[i] <= 'Я')
		{
			rus_flag = true;
			++count_capital;
			++count_rus;
		}
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			eng_flag = true;
			++count_small;
			++count_eng;
		}
		if(str[i] == '\0')
		{
			end_reached = true;
		}
		if(!end_reached)
		{
			++count_all;
		}
	}

	
}