#include <iostream>

using namespace std;

//多重继承

//电话类
class phone
{
public:
	phone(const string &number):m_number(number)
	{
	
	}
	void call(void)
	{
		cout << m_number << endl;
	}
	string m_number;
};

//播放器类
class player
{
public:
	player(string player):m_player(player)
	{
	
	}
	void play(void)
	{
		cout << m_player << endl;
	}
	string m_player;
};

//计算机类
class computer
{
public:
	computer(string system):m_system(system)
	{
	
	}
	void compute(void)
	{
		cout << m_system << endl;
	}
	string m_system;
};

//智能手机，继承了，电话类，播放器类，计算机类
class smartphone:public phone,public player,public computer
{
public:
		smartphone(string sys,string number,string play,string system):smart_sys(sys),phone(number),player(play),computer(system)
		{
		
		}

		void show_smart_phone(void)
		{
			cout << smart_sys << endl;
		}
	  string smart_sys;
};

int main(void)
{
	smartphone s = smartphone("smart android4.4","18812345432","mp4","windows xp");
	s.show_smart_phone();
	smartphone *p = &s;

	phone *p1 = p;
	player *p2 = p;
	computer *p3 = p;

	cout << p << endl;
	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;

	return 0;
}

