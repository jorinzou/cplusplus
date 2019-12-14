#include <cstring>
#include <iostream>
#include <stdexcept>
using namespace std;
// 双向线性链表
template<typename T>
class List {
public:
	// 构造、析构、拷贝构造、拷贝赋值
	List (void) : m_head (NULL),
		m_tail (NULL) {}
	~List (void) {
		clear ();
	}
	List (List const& that) :
		m_head (NULL), m_tail (NULL) {
		for (Node* node = that.m_head;
			node; node = node->m_next)
			push_back (node->m_data);
	}
	List& operator= (List const& rhs) {
		if (&rhs != this) {
			List list = rhs;
			swap (m_head, list.m_head);
			swap (m_tail, list.m_tail);
		}
		return *this;
	}
	// 获取首元素
	T& front (void) {
		if (empty ())
			throw underflow_error (
				"链表下溢！");
		return m_head->m_data;
	}
	T const& front (void) const {
		return const_cast<List*> (
			this)->front ();
	}
	// 向首部压入
	void push_front	(T const& data) {
		m_head = new Node (data, NULL,
			m_head);
		if (m_head->m_next)
			m_head->m_next->m_prev =
				m_head;
		else
			m_tail = m_head;
	}
	// 从首部弹出
	void pop_front (void) {
		if (empty ())
			throw underflow_error (
				"链表下溢！");
		Node* next = m_head->m_next;
		delete m_head;
		m_head = next;
		if (m_head)
			m_head->m_prev = NULL;
		else
			m_tail = NULL;
	}
	// 获取尾元素
	T& back (void) {
		if (empty ())
			throw underflow_error (
				"链表下溢！");
		return m_tail->m_data;
	}
	T const& back (void) const {
		return const_cast<List*> (
			this)->back ();
	}
	// 向尾部压入
	void push_back (T const& data) {
		m_tail = new Node (data, m_tail);
		if (m_tail->m_prev)
			m_tail->m_prev->m_next =
				m_tail;
		else
			m_head = m_tail;
	}
	// 从尾部弹出
	void pop_back (void) {
		if (empty ())
			throw underflow_error (
				"链表下溢！");
		Node* prev = m_tail->m_prev;
		delete m_tail;
		m_tail = prev;
		if (m_tail)
			m_tail->m_next = NULL;
		else
			m_head = NULL;
	}
	// 删除所有匹配元素
	void remove (T const& data) {
		for (Node* node = m_head, *next;
			node; node = next) {
			next = node->m_next;
			if (equal (node->m_data,
				data)) {
				if (node->m_prev)
					node->m_prev->
						m_next = node->
							m_next;
				else
					m_head = node->
						m_next;
				if (node->m_next)
					node->m_next->
						m_prev = node->
							m_prev;
				else
					m_tail = node->
						m_prev;
				delete node;
			}
		}
	}
	// 清空
	void clear (void) {
		while (! empty ())
			pop_back ();
	}
	// 判空
	bool empty (void) const {
		return ! m_head && ! m_tail;
	}
	// 大小
	size_t size (void) const {
		size_t nodes = 0;
		for (Node* node = m_head; node;
			node = node->m_next)
			++nodes;
		return nodes;
	}
	// 下标操作符
	T& operator[] (size_t i) {
		Node* node;
		for (node = m_head; node;
			node = node->m_next)
			if (! i--)
				break;
		if (! node) 
			throw out_of_range (
				"下标越界！");
		return node->m_data;
	}
	T const& operator[] (
		size_t i) const {
		return const_cast<List&> (
			*this)[i];
	}
	// 插入输出流
	friend ostream& operator<< (
		ostream& os, List const& list) {
		for (Node* node = list.m_head;
			node; node = node->m_next)
			os << *node;
		return os;
	}
private:
	// 节点
	class Node {
	public:
		Node (T const& data,
			Node* prev = NULL,
			Node* next = NULL) :
			m_data (data), m_prev (prev),
			m_next (next) {}
		friend ostream& operator<< (
			ostream& os,
			Node const& node) {
			return os << '('
				<< node.m_data << ')';
		}
		T     m_data; // 数据
		Node* m_prev; // 前指针
		Node* m_next; // 后指针
	};
	// 通用版本
	bool equal (T const& a,
		T const& b) const {
		return a == b;
	}
	Node* m_head; // 头指针
	Node* m_tail; // 尾指针
public:
	// 正向顺序可写迭代器
	// 正向：增向尾，减向首
	// 顺序：一次只能迭代一个元素
	// 可写：目标元素可被修改
	class Iterator {
	public:
		Iterator (Node* head = NULL,
			Node* tail = NULL,
			Node* node = NULL) :
			m_head (head), m_tail (tail),
			m_node (node) {}
		bool operator== (
			Iterator const& it) const {
			return m_node == it.m_node;
		}
		bool operator!= (
			Iterator const& it) const {
			return ! (*this == it);
		}
		Iterator& operator++ (void) {
			if (m_node)
				m_node = m_node->m_next;
			else
				m_node = m_head;
			return *this;
		}
		Iterator const operator++ (int) {
			Iterator it = *this;
			++*this;
			return it;
		}
		Iterator& operator-- (void) {
			if (m_node)
				m_node = m_node->m_prev;
			else
				m_node = m_tail;
			return *this;
		}
		Iterator const operator-- (int) {
			Iterator it = *this;
			--*this;
			return it;
		}
		T& operator* (void) const {
			return m_node->m_data;
		}
		T* operator-> (void) const {
			return &**this;
		}
	private:
		Node* m_head;
		Node* m_tail;
		Node* m_node;
		friend class List;
	};
	// 获取起始迭代器
	Iterator begin (void) {
		return Iterator (m_head, m_tail,
			m_head);
	}
	// 获取终止迭代器
	Iterator end (void) {
		return Iterator (m_head, m_tail);
	}
	// 插入
	// 在迭代器loc之前插入新元素data
	// 返回指向新插入元素的迭代器
	Iterator insert (Iterator loc,
		T const& data) {
		if (loc == end ()) {
			push_back (data);
			return Iterator (m_head,
				m_tail, m_tail);
		}
		else {
			Node* node = new Node (
				data, loc.m_node->m_prev,
				loc.m_node);
			if (node->m_prev)
				node->m_prev->m_next =
					node;
			else
				m_head = node;
			node->m_next->m_prev = node;
			return Iterator (m_head,
				m_tail, node);
		}
	}
	// 删除
	// 删除迭代器loc所指向的元素
	// 返回指向被删元素下一个位置的迭代器
	Iterator erase (Iterator loc) {
		if (loc == end ())
			throw invalid_argument (
				"无效参数！");
		if (loc.m_node->m_prev)
			loc.m_node->m_prev->m_next =
				loc.m_node->m_next;
		else
			m_head = loc.m_node->m_next;
		if (loc.m_node->m_next)
			loc.m_node->m_next->m_prev =
				loc.m_node->m_prev;
		else
			m_tail = loc.m_node->m_prev;
		Node* next = loc.m_node->m_next;
		delete loc.m_node;
		return Iterator (m_head, m_tail,
			next);
	}
};
// 针对char const*类型的特化版本
template<>
bool List<char const*>::equal (
	char const* const& a,
	char const* const& b) const {
	return ! strcmp (a, b);
}
// 线性查找
/*
int find (int* data, int size, int key) {
	for (int i = 0; i < size; ++i)
		if (data[i] == key)
			return i;
	return -1;
}
int* find (int* begin, int* end,
	int key) {
	int* it;
	for (it = begin; it != end; ++it)
		if (*it == key)
			break;
	return it;
}
*/
template<typename IT, typename T>
IT find (IT begin, IT end, T const& key){
	IT it;
	for (it = begin; it != end; ++it)
		if (*it == key)
			break;
	return it;
}
// 测试用例
void test1 (void) {
	List<int> li;
	li.push_front (30);
	li.push_front (20);
	li.push_front (10);
	li.push_front (0);
	cout << li << endl; // 0 10 20 30
	++li.front ();
	cout << li << endl; // 1 10 20 30
	List<int> const& cr = li;
	cout << /*++*/cr.front () << endl;
	li.pop_front ();
	cout << li << endl; // 10 20 30
	li.push_back (40);
	li.push_back (50);
	li.push_back (60);
	li.push_back (70);
	cout << li << endl;
	// 10 20 30 40 50 60 70
	li.back ()--;
	cout << li << endl;
	// 10 20 30 40 50 60 69
	List<int> const* cp = &li;
	cout << cp->back ()/*--*/ << endl;
	li.pop_back ();
	cout << li << endl;
	// 10 20 30 40 50 60
	li.push_front (30);
	li.push_back (30);
	cout << li << endl;
	// 30 10 20 30 40 50 60 30
	li.remove (30);
	cout << li << endl;
	// 10 20 40 50 60
	cout << boolalpha << li.empty ()
		<< ' ' << li.size () << endl;
	// false 5
	li.clear ();
	cout << li.empty () << ' '
		<< li.size () << endl;
	// true 0
}
void test2 (void) {
	List<int> l1;
	l1.push_back (10);
	l1.push_back (20);
	l1.push_back (30);
	List<int> l2 = l1; // 拷贝构造
	cout << "l1: " << l1 << endl;
	// 10 20 30
	cout << "l2: " << l2 << endl;
	// 10 20 30
	++l1.front ();
	++l2.back ();
	cout << "l1: " << l1 << endl;
	// 11 20 30
	cout << "l2: " << l2 << endl;
	// 10 20 31
	l2 = l1; // 拷贝赋值
	cout << "l1: " << l1 << endl;
	// 11 20 30
	cout << "l2: " << l2 << endl;
	// 11 20 30
	--l1.front ();
	l2.back ()++;
	cout << "l1: " << l1 << endl;
	// 10 20 30
	cout << "l2: " << l2 << endl;
	// 11 20 31
}
void test3 (void) {
	char sa[][256]   = {"北京", "上海",
		"北京", "广州", "北京", "深圳"};
//	char const* sa[] = {"北京", "上海",
//		"北京", "广州", "北京", "深圳"};
//	List<string> ls;
	List<char const*> ls;
	for (size_t i = 0; i < sizeof (sa) /
		sizeof (sa[0]); ++i)
		ls.push_back (sa[i]);
	cout << ls << endl;
	ls.remove ("北京");
	cout << ls << endl;
}
void test4 (void) {
	List<int> li;
	for (int i = 1; i < 10; ++i)
		li.push_back (i);
	cout << li << endl;
	/* O(N^2)
	size_t size = li.size ();
	for (size_t i = 0; i < size; ++i)
		li[i] *= li[i];
	*/
	// O(N)
	for (List<int>::Iterator it =
		li.begin (); it != li.end ();
		++it)
		*it *= *it;
	cout << li << endl;
}
void test5 (void) {
	List<int> li;
	li.insert (li.end (), 10);
	li.insert (li.end (), 50);
	li.insert (li.end (), 90);
	cout << li << endl; // 10 50 90
	List<int>::Iterator loc =
		li.begin ();
	li.insert (li.insert (li.insert (
		++loc, 40), 30), 20);
	cout << li << endl;
	// 10 20 30 40 50 90
	loc = li.end ();
	li.insert (li.insert (li.insert (
		--loc, 80), 70), 60);
	cout << li << endl;
	// 10 20 30 40 50 60 70 80 90
	loc = li.begin ();
	li.erase (li.erase (li.erase (
		++++++loc)));
	cout << li << endl;
	// 10 20 30 70 80 90
}
void test6 (void) {
	int ai[] = {13, 17, 11, 23, 47, 31};
//	int* pi = find (ai, ai + 6, 11);
	int* pi = find (ai, ai + 6, 19);
	if (pi == ai + 6)
		cout << "没找到！" << endl;
	else
		cout << "找到了：" << *pi
			<< endl;
	List<string> ls;
	ls.push_back ("达内");
	ls.push_back ("微软");
	ls.push_back ("苹果");
	ls.push_back ("谷歌");
	ls.push_back ("甲骨文");
	ls.push_back ("IBM");
	List<string>::Iterator it =
		find (ls.begin (), ls.end (),
			/*"苹果"*/"联想");
	if (it == ls.end ())
		cout << "没找到！" << endl;
	else
		cout << "找到了：" << *it
			<< endl;
}
// 进程入口
int main (void) {
//	test1 ();
//	test2 ();
//	test3 ();
//	test4 ();
//	test5 ();
	test6 ();
	return 0;
}
