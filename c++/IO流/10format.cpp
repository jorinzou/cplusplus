#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void)
{
    //默认输出格式保留6位有效数字
    cout << sqrt(30000) << endl;
    cout << setprecision(10) << 
                sqrt(30000) << endl;

    cout << scientific<< sqrt(30000) <<endl;

    cout << "[";
    cout << setw(15) << setfill('-') <<
        showpos << internal << 12345678;
    cout << ']' << endl;
    return 0;
}









