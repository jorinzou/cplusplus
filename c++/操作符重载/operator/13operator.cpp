#include <iostream>
#include <cstdlib>

using namespace std;

//delete new 操作符重载
class C
{
public:
	C()
	{
		cout << "C" << endl;
	}

	~C()
	{
		cout << "~C" << endl;
	}

	void *operator new(size_t size)
	{
		void *p = malloc(size);
		return p;
	}

 void operator delete(void *p)
	{
			free(p);
	}

	int m_data;
};

int main(void)
{
	C *p = new C;
	cout << p->m_data << endl;
	return 0;
}
