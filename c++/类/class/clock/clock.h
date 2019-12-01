#ifndef _CLOCK_H_
#define _CLOCK_H_

#include <cstdio>
#include <ctime>
#include <iostream>
#include <unistd.h>

using namespace std;

class mclock
{
public:
	mclock();
	~mclock();
	void run(void);
private:
	void show(void);
	void tick(void);
	int m_sec;
	int m_min;
	int m_hour;
};




#endif
