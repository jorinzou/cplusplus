#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    //默认输出格式保留6位有效数字
    cout << sqrt(30000) << endl;
    cout.precision(10);//10位有效数字
    cout << sqrt(30000) << endl;
    cout.setf(ios::scientific);
    cout << sqrt(30000) << endl;
    cout << "[";
    cout.width(15);//域宽
    cout.fill('-');//空白用'-'填充
    cout.setf(ios::showpos);//显示符号位
    cout.setf(ios::internal);//内插对齐
    cout << 12345678;
    cout << ']' << endl;
    return 0;
}









