#include <iostream>

using namespace std;

class A
{
public:
	A(int s,int m,int h):sec(s),min(m),hour(h)
	{
	
	}

	void show(void)
	{
		cout << hour << ":" << min << ":" << sec << endl;
	}
private:
	int sec;
	int min;
	int hour;
};

int main(void)
{
	A a = A(15,25,45);
	a.show();
	return 0;
}
