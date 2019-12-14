#include <iostream>

using namespace std;

//递归实例化
template <typename T>
class A
{
	public:
	A()
	{
	}
	
	T &operator[](size_t i)
	{
			return m_arr[i];
	}

	friend ostream& operator<< (ostream &os ,A<T> const &a)
	{
		  size_t size = sizeof(a.m_arr)/sizeof(a.m_arr[0]);
			for(int i = 0; i < size; ++i){
				os << a.m_arr[i] << endl;
			}
			return os;
	}

	T m_arr[3];
};

int main(void)
{
	A<int> a;
	a[0] = 11;
	a[1] = 12;
	a[2] = 13;

	cout << a;

	return 0;
}
