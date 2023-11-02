#include <iostream>

namespace PHMS
{
	namespace INFORMATICS
	{
		enum EDU_TYPE
		{
			SCHOOL,
			LICEUM,
			HOMESTUD,
			OTHER
		};

		struct student
		{
			int ID;
			float height;
			float weight;
			float avr_mark;
			EDU_TYPE edu_type;
			int friend_ID;
		};

		bool makeFriends(student s1, student s2);
		bool unmakeFriends(student s1, student s2);
		void showInfo(student s1);
		student shuffleInfo(student s1);
	}
}

bool PHMS::INFORMATICS::makeFriends(student s1, student s2)
{
	if (s1.friend_ID == s2.ID)
	{
		return false;
	}
	else
	{
		s1.friend_ID = s2.ID;
		s2.friend_ID = s1.ID;
		return true;
	}
}
bool PHMS::INFORMATICS::unmakeFriends(student s1, student s2)
{
	// showInfo(s1);
	// showInfo(s2);
	if (s1.friend_ID != s2.ID)
	{
		return false;
	}
	else
	{
		s1.friend_ID = s1.ID;
		s2.friend_ID = s2.ID;
		showInfo(s1);
		showInfo(s2);
		return true;
	}
}
void PHMS::INFORMATICS::showInfo(student s1)
{
	std::cout << "ID " << s1.ID << std::endl
			  << "height " << s1.height << std::endl

			  << "weight " << s1.weight << std::endl
			  << "avr_mark " << s1.avr_mark << std::endl
			  << "friend_ID " << s1.friend_ID << std::endl;
	std::cout << "edu_type ";

	switch (s1.edu_type)
	{
	case SCHOOL:
		std::cout << "school";
		break;
	case LICEUM:
		std::cout << "liceum";
		break;
	case HOMESTUD:
		std::cout << "homestud";
		break;
	case OTHER:
		std::cout << "other";
		break;
	default:
		std::cout << "no data";
		break;
	}
	std::cout << std::endl
			  << "---------------------------------------" 
			  << std::endl;
}
PHMS::INFORMATICS::student PHMS::INFORMATICS::shuffleInfo(student s1)
{

	int tmp1 = s1.ID;
	float tmp2 = s1.height;
	float tmp3 = s1.weight;
	float tmp4 = s1.avr_mark;
	int tmp5 = s1.friend_ID;
	EDU_TYPE tmp6 = s1.edu_type;

	s1.ID = tmp6;
	s1.height = tmp5;
	s1.weight = tmp4;
	s1.avr_mark = tmp3;
	s1.friend_ID = tmp2;
	s1.edu_type = EDU_TYPE(tmp1);

	return s1;
}

int main()
{
	PHMS::INFORMATICS::student ivan{
		123,
		170.8,
		60.9,
		4.5,
		PHMS::INFORMATICS::EDU_TYPE::HOMESTUD,
		123};

	PHMS::INFORMATICS::student sasha{
		123,
		170.8,
		60.9,
		4.5,
		PHMS::INFORMATICS::EDU_TYPE::HOMESTUD,
		123};

	PHMS::INFORMATICS::showInfo(ivan);
	PHMS::INFORMATICS::showInfo(PHMS::INFORMATICS::shuffleInfo(ivan));

	PHMS::INFORMATICS::showInfo(sasha);
	PHMS::INFORMATICS::showInfo(PHMS::INFORMATICS::shuffleInfo(sasha));

	//! в пространстве имен PHMS создать пространство имен INFORMATICS

	//! в пространстве имен PHMS::INFORMATICS:

	//! 1) объявить тип данных структуры student. поля структуры:

	//! ID(уникальный номер) ученика (тип данных выбрать самостоятельно, выбор пояснить комментарием)
	//! рост (тип данных выбрать самостоятельно, выбор пояснить комментарием)
	//! вес (тип данных выбрать самостоятельно, выбор пояснить комментарием)
	//! средний бал в учебном заведении (тип данных выбрать самостоятельно, выбор пояснить комментарием)
	//! тип учебного заведения (либо ШКОЛА, либо ЛИЦЕЙ, либо ДОМАШНЕЕ_ОБРАЗОВАНИЕ, либо ИНОЕ)
	//! друг (тот же тип, что и ID игрока)

	//! 2) объявить функцию bool makeFriends(student s1, student s2)
	//! 3) объявить функцию bool unmakeFriends(student s1, student s2)
	//! 4) объявить функцию void showInfo(student s1)
	//! 5) объявить функцию student shuffleInfo(student s1)

	//! вне пространства имен PHMS::INFORMATICS:

	//! 1) определить функцию bool makeFriends(student s1, student s2):
	//! проверить, являются ли s1 и s2 друзьями, если являются -- закончить выполнение функции, вернуть 0
	//! иначе -- присвоить переменным student.друг значения ID противоположных структур, вернуть 1

	//! 2) определить функцию bool unmakeFriends(student s1, student s2):
	//! проверить, не являются ли s1 и s2 друзьями, если не являются -- закончить выполнение функции, вернуть 0
	//! иначе -- присвоить переменным student.друг значения ID собственных структур (прим. s1.друг = s1.ID ), вернуть 1

	//! 3) определить функцию void showInfo(student s1):
	//! вывести все значения s1 в столбик с поясняющей строкой (прим. "ID ученика - 534"
	//! "тип учебного заведения - ШКОЛА")

	//! 5) определить функцию student shuffleInfo(student s1):
	//! ID, рост, вес, средний бал должны быть перемешаны

	//! в функции main() создать несколько произвольных переменных с типом PHMS::INFORMATICS::student
	//! продемонстрировать работу всех функций
}