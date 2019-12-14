#include <iostream>
using namespace std;

template<typename T>
class Array 
{
public:
	void push_back (T const data) 
	{
		cout << "在数组尾端压入元素"
			<< endl;
	}
	void pop_back (void) 
	{
		cout << "从数组尾端弹出元素"
			<< endl;
	}
};

template<typename T>
class List 
{
public:
	void push_back (T const data) 
	{
		cout << "在链表尾端压入元素"
			<< endl;
	}
	
	void pop_back (void) 
	{
		cout << "从链表尾端弹出元素"
			<< endl;
	}
};

template<typename T,template<typename> class C = Array>
class Stack 
{
public:
	void push (T const& data) 
	{
		m_c.push_back (data);
	}
	void pop (void) 
	{
		m_c.pop_back ();
	}
private:
	C<T> m_c;
};

int main (void) 
{
	Stack<int/*, Array*/> s1;
	s1.push (100);
	s1.pop ();
	Stack<int, List> s2;
	s2.push (100);
	s2.pop ();
	return 0;
}


