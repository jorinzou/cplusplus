#include <cstdio>
#include <iostream>
#include <memory>
using namespace std;
class A {
public:
	A (int arg = 0) : m_var (arg) 
	{
		cout << "A构造：" << this << endl;
	}
	
	~A (void) 
	{
		cout << "A析构：" << this << endl;
	}
	void print (void) const 
	{
		cout << m_var << endl;
	}
	int m_var;
};

template<typename T>
class AutoPtr 
{
public:
	AutoPtr (T* p = NULL) : m_p (p) 
	{}
	AutoPtr (AutoPtr& that) :m_p (that.release ())
	{}
	
	AutoPtr& operator= (AutoPtr& rhs) 
	{
		if (&rhs != this)
			reset (rhs.release ());
		return *this;
	}
	
	~AutoPtr (void) 
	{
		delete m_p;
	}
	T& operator* (void) const 
	{
		return *m_p;
	}
	
	T* operator-> (void) const 
	{
		return &**this;
	}
private:
	T* release (void) 
	{
		T* p = m_p;
		m_p = NULL;
		return p;
	}
	
	void reset (T* p) 
	{
		if (p != m_p) 
		{
			delete m_p;
			m_p = p;
		}
	}
	T* m_p;
};

template<typename T>
class AutoPtr<T[]> 
{
public:
	AutoPtr (T* p = NULL) : m_p (p) 
	{}
	AutoPtr (AutoPtr& that) :m_p (that.release ())
	{}
	
	AutoPtr& operator= (AutoPtr& rhs) 
	{
		if (&rhs != this)
			reset (rhs.release ());
		return *this;
	}
	
	~AutoPtr (void) 
	{
		delete[] m_p;
	}
	
	T& operator* (void) const 
	{
		return *m_p;
	}
	T* operator-> (void) const 
	{
		return &**this;
	}
private:
	T* release (void) 
	{
		T* p = m_p;
		m_p = NULL;
		return p;
	}
	void reset (T* p) 
	{
		if (p != m_p) 
		{
			delete[] m_p;
			m_p = p;
		}
	}
	T* m_p;
};
int foo (void) 
{
//	A a;
//	A* pa = new A;
//	auto_ptr<A> pa (new A);
	AutoPtr<A> pa (new A);
	++pa->m_var;
//	++pa.operator-> ()->m_var;
	(*pa).print (); // 1
//	pa.operator* ().print ();
	AutoPtr<A> pb = pa; // 拷贝构造
	++pb->m_var;
	(*pb).print (); // 2
	AutoPtr<A> pc (new A (100));
	pb = pc; // 拷贝赋值
	++pb->m_var;
	(*pb).print (); // 101
	FILE* fp = fopen ("none", "r");
	if (! fp) {
		perror ("fopen");
//		delete pa;
		return -1;
	}
	// ...
	fclose (fp);
//	delete pa;
	return 0;
}

int main (void) {
//	foo ();
//	auto_ptr<A> pa (new A[3]);
//	AutoPtr<A[]> pa (new A[3]);
	A* pa = new A[5];
	cout << *((int*)pa-1) << endl;
	delete[] pa;
	return 0;
}
// smart_ptr<T>
