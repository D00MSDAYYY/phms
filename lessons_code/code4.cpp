#include <iostream>
// enum LEAGUE
// {
// 	High,
// 	Medium,
// 	Low
// };

// struct Team
// {
// 	int num_of_players;
// 	char *name;
// 	LEAGUE league;
// 	double score;
// };

// void showInfo(Team t);
// void deleteTeam(Team t);
// void changeName(Team t);
// // change ...

// int main()
// {
// 	Team t1{10, "name", LEAGUE::Low, 1.0};
// 	t1.num_of_players = -1;
// 	t1.score = -12;

// 	showInfo(t1);
// }

// class Team
// {
// private:
// 	int num_of_players;
// 	char* name;
// 	LEAGUE league;
// 	double score;

// public:
// 	void showInfo();
// 	void deleteTeam();
// 	void changeName(char *str);

// 	void changeScore(double d)
// 	{
// 		if (score + d < 0)
// 			return;
// 		else
// 			score += d;
// 	}
// };

// int main()
// {
// 	Team t2{10, "name", LEAGUE::Low, 1.0};

// 	t2.changeScore(-100);

// 	t2.changeScore(5);

// 	t2.changeName("maxim");
// }

//! создать класс Банковский счет

//! класс должен содержать в себе приватные поля :
//! id
//! имя
//! возраст
//! город
//! гендер(енум)
//! колличество лет существования счета

//! класс должен содержать в себе публичные поля :
//! изменить  ... (каждое поля в отдельности)

// enum GENDER
// {
// 	Male,
// 	Female
// };

// class Bank_Account
// {
// private:
// 	int _ID{};
// 	char _name[90];
// 	int _age{};
// 	char _city[90];
// 	GENDER _gender{};
// 	int _duration{};

// public:
// 	void changeID(int ID)
// 	{
// 		if (ID > 0 && ID < 1000)
// 			_ID = ID;
// 	}

// 	int getID()
// 	{
// 		return _ID;
// 	}
// };

// int main()
// {
// 	Bank_Account acc1;
// 	acc1.changeID(100);
// 	std::cerr << acc1.getID() << " ";
// 	acc1.changeID(1000000);
// 	std::cerr << acc1.getID() << " ";
// }