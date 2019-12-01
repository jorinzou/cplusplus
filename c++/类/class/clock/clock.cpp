#include "clock.h"

mclock::mclock()
{	
	cout << "mclock()" << endl;
	time_t t = time(NULL);
	struct tm *m_tm= localtime(&t);
	m_hour = m_tm->tm_hour;
	m_min = m_tm->tm_min;
	m_sec = m_tm->tm_sec;
}

mclock::~mclock()
{
	cout << "~mclock()" << endl;
}

void mclock::run(void)
{
	while(1){
		sleep(1);
		tick();
		show();
	}
}

void mclock::show(void)
{
	cout << m_hour << ":" << m_min << ":" << m_sec << endl;
}

void mclock::tick(void)
{
	if (++m_sec == 60){
		m_sec = 0;
		if (++m_min == 60){
			m_min = 0;
			if (++m_hour == 24){
				m_hour = 0;
			}
		}
	}
}


