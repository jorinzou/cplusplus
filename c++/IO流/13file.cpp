#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    //写文件操作,fprintf
    ofstream ofs("file.txt");
    ofs << 1234 << ' ' << 56.78 << 
        ' ' << "hello" << endl;
    ofs.close();
    //读文件操作,fscanf
    ifstream ifs("file.txt");
    int i;
    double d;
    string s;
    ifs >> i >> d >> s;
    cout << i << ' ' << d << ' '
        << ' ' << s << endl;
    ifs.close();
    return 0;
}


















