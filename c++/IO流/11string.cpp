#include <iostream>
#include <sstream>
#include <cstdio>
using namespace std;
int main(void){
    int i = 1234;
    double d = 5.67;
    char c = 'J';
    char s[] = "hello,world!";
#if 0
    char buf[1024];
    sprintf(buf,"%d %lf %c %s",i,d,c,s);
    cout << buf << endl;
#else
    ostringstream oss;
    oss << i << ' ' << d << ' ' << c 
        << ' ' << s;
    cout << oss.str() << endl; 
#endif
    return 0;
}










