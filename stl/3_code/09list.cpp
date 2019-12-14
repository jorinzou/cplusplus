#include <list>
#include <iostream>

using namespace std;

//容器链表的使用

//遍历链表打印元素
void print(const list<int> &l)
{
	cout << "----------------------------" << endl;
	list<int>::const_iterator it;
	for(it = l.begin(); it != l.end(); ++it){
		cout << *it << endl;
	}
	cout << "----------------------------" << endl;
}

//back 返回最后一个元素引用
void list_back(list<int> &l)
{
	l.back() = 12;
	cout << "back=" << l.back() << endl;
}

//clear，清空链表所有元素
void list_clear(list<int> &l)
{
	cout << "empty=" << l.size() << endl;
	cout << "size=" << l.size() << endl;
	l.clear();
	cout << "size=" << l.size() << endl;
}

//初始化链表
void init_list(list<int> &l,int *arr ,int size)
{
	l.assign(arr,arr+size);
}

//擦除链表元素
void list_erase(list<int>& l)
{
	cout << "erase=" << *l.erase(l.begin()) <<endl;
}

//返回链表第一个元素的引用
void list_front(list<int> &l)
{
	cout << "front=" << l.front() << endl;;
}

//链表插入元素
void list_insert(list<int> &l)
{
	list<int>::iterator it = l.insert(l.end(),99999);
	cout << *it << endl;

}

//返回链表能存储的元素最大数目
void list_max_size(list<int> &l)
{
	cout << "max_size=" << l.max_size() << endl;
}

//合并链表
void list_merge(list<int> &l)
{
	int arr[5] = {1,2,3,4,5};
	list<int> l1;
	l1.assign(arr,arr+5);
	l.merge(l1);
	cout << "merge------------------------------" << endl;
	print(l);
}

//链表去重，排序才能去重
void list_unique(list<int> &l)
{
	l.unique();
	cout << "unique-----------------------------" << endl;
	print(l);
}

bool IntCmp(int a,int b)
{
	//降序
	return a > b;
}

//排序，默认是升序
void list_sort(list<int> &l)
{
	l.sort(IntCmp);
	cout << "sort------------------------------" << endl;
	print(l);
}

//交换两个链表
void list_swap(list<int> &l1,list<int> &l2)
{
	//交换两个链表的元素
	l1.swap(l2);
	print(l1);
	print(l2);
}

//链表拼接
void list_splice(list<int> &l1,list<int> &l2)
{
	//l2拼接到l1的头
	l1.splice(l1.begin(),l2);
	print(l1);
}

int main(void)
{
	int arr1[5] = {1,2,3,4,5};
	list<int> l1;
	init_list(l1,&arr1[0],sizeof(arr1)/sizeof(arr1[0]));
	print(l1);
	//list_back(l1);
	//list_clear(l1);
	//list_erase(l1);
	//list_front(l1);
	//list_insert(l1);
	//print(l1);
	//list_max_size(l1);
	//list_merge(l1);
	//list_sort(l1);
	//list_unique(l1);
	int arr2[6] = {6,7,8,9,10,11};
	list<int> l2;
	init_list(l2,&arr2[0],sizeof(arr2)/sizeof(arr2[0]));
	print(l2);
	
	list_splice(l1,l2);

	return 0;
}
