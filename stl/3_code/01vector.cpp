#include <iostream>
#include <vector>

using namespace std;

//向量使用vector

//遍历容器
void print(vector<int> const &v)
{
	vector<int>::const_iterator it;
	cout << "----------------------" << endl;
	for(it = v.begin(); it != v.end(); it++){
		cout << *it << endl;
	}
	cout << "----------------------" << endl;
}

//构造函数1
vector<int> &constructor(void)
{
	int arr[5] = {1,2,3,4,5};
	static vector<int> v(arr,arr+5);
	v.push_back(6);//从容器尾部插入一个元素
	v.pop_back();//从容器尾部删除一个元素
	v.insert(v.begin(),222);//在指定位置插入元素

	int &pf = v.front();//返回起始元素的引用
	cout << "pf="<< pf << endl;
	int &pb = v.back();//返回尾部元素的引用
	cout << "bp="<< pb << endl;

	//返回指定位置元素的引用
	cout << "at=" << v.at(0) << endl;


	cout << "empty?" << v.empty() << endl;//判断容器的有没有容纳元素
	v.clear();//删除容器中的所有元素
	cout << "empty?" << v.empty() << endl;//判断容器的有没有容纳元素

	//容器中填充数据
	v.assign(6,999);

	return v;
}

//使用容器
void use_container(void)
{
	vector<int> &v = constructor();
	cout << "----------------------" << endl;
	cout << "size="<< v.size() << endl;//容器中的元素个数
	cout << "capacity=" << v.capacity() << endl;//容器能容纳多少个元素
	cout << "max_size=" << v.max_size() << endl;//容器所能容纳元素的最大值，包含重新分配内存
	cout << "----------------------" << endl;
	print(v);
}

int main(void)
{
	use_container();
	return 0;
}
