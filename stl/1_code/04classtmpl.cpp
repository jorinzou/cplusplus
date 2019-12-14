#include <iostream>

using namespace std;

//类模板

template <typename T>
class A
{
public:
	A(T a,T b):m_a(a),m_b(b)
	{
	}

	T min(void)
	{
		return m_a < m_b?m_a:m_b;
	}

	T max(void)
	{
		return m_a > m_b?m_a:m_b;
	}

private:
	T m_a;
	T m_b;
};

int main(void)
{
	A<int>a(4,5);
	cout << a.min() << endl;
	cout << a.max() << endl;
	return 0;
}
