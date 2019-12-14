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
		if (rhs != this) {
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
	T& back (void) {}
	T const& back (void) const {}
	// 向尾部压入
	void push_back (T const& data) {}
	// 从尾部弹出
	void pop_back (void) {}
	// 删除所有匹配元素
	void remove (T const& data) {}
	// 清空
	void clear (void) {}
	// 判空
	bool empty (void) const {}
	// 大小
	size_t size (void) const {}
	// 插入输出流
	friend ostream& operator<< (
		ostream& os, List const& list) {
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
	Node* m_head; // 头指针
	Node* m_tail; // 尾指针
};
// 测试用例
void test1 (void) {
}
// 进程入口
int main (void) {
	test1 ();
	return 0;
}
