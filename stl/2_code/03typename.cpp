#include <iostream>

using namespace std;

//typename 解决嵌套依赖

class A
{
	public:
	typedef unsigned int uint;
	class B
	{
		public:
			B()
			{
				cout << "B" << endl;
			}
	};
};

class C
{
	public:
	class D{};
};

template <typename T>
void foo(void)
{
	 typename T::uint a;
   typename T::B b;
}

int main(void)
{
	foo<A>();

	return 0;
}
