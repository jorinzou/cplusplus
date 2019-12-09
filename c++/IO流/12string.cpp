#include <iostream>
#include <sstream>
#include <cstdio>
using namespace std;
int main(void){
    int i=0;
    double d = 0.0;
    char c = '\0';
    char s[100] = {0};
    istringstream iss;
    iss.str("100 3.14 G helloworld");
    iss >> i >> d >> c >> s;

    cout << i << ' ' << d << ' ' << c << 
        ' ' << s << endl;
    return 0;
}














