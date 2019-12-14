#include <iostream>
#include <map>

using namespace std;

//映射初始化
void map_init(map<char,string> &m)
{
	m['A'] = "john";
	m['B'] = "jorin";
	m['C'] = "zou";
	m['D'] = "world";
	m['E'] = "earth";
}

//遍历映射
void print(map<char,string> &m)
{
	map<char,string>::iterator it;
	for(it = m.begin(); it != m.end(); ++it){
		//cout << m[it->first] << endl;
		cout << it->first << ":" << it->second << endl;
	}
}

//返回map中键值等于指定值的个数
void map_cout(map<char,string> &m)
{
	cout << "count-----------------------" << endl; 
	int size = m.count('A');
	cout << "size=" << size  << endl; 
}

//查找
void map_find(map<char,string> &m)
{
	cout << "find-----------------------" << endl;
	cout << m.find('A')->second << endl;
}

//逆向迭代器
void map_reverse(map<char,string> &m)
{
	map<char,string>::reverse_iterator it = m.rbegin();
	cout << "size=" << m.size() << endl;
	for(it; it != m.rend(); it++){
		cout << it->first << ":" << it->second << endl;
	}
}

int main(void)
{
	map<char,string> m;
	map_init(m);
	print(m);

	//map_cout(m);
	//map_find(m);
  //map_reverse(m);	

	
	return 0;
}
