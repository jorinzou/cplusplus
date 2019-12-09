#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main(void)
{
    ofstream ofs("last.txt");
    char wbuf[]="jiangguiliang94@sina.com";
    ofs.write(wbuf,strlen(wbuf));
    ofs.close();
    
    ifstream ifs("last.txt");
    char rbuf[100]={0};
    ifs.read(rbuf,sizeof(rbuf));
    cout << rbuf << endl;
    ifs.close();
    return 0;
}






