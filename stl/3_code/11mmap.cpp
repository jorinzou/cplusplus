#include <iostream>
#include <map>

//支持相同键值,不支持下标运算

using namespace std;

//多重映射初始化
void mmap_init(multimap<string,string> &m)
{
	m.insert(make_pair("马云","40亿身家"));
	m.insert(make_pair("马云","50岁"));
	m.insert(make_pair("雷军","90亿身家"));
	m.insert(make_pair("雷军","40岁"));
	m.insert(make_pair("马化腾","100亿身家"));
	m.insert(make_pair("马化腾","60岁"));
}

//遍历映射表
void print(multimap<string,string> &m)
{
	multimap<string,string>::iterator it;
	for(it = m.begin(); it != m.end(); ++it){
		cout << it->first << ":" << it->second << endl;
	}
}

int main(void)
{
	multimap<string,string> mm;
	mmap_init(mm);
	print(mm);

	return 0;
}
