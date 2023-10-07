#include <iostream>
using namespace std;
int main()
{
    double salary = 5000.98;
    // 8 Bytes
    cout << sizeof(salary) << " bytes"<< endl;

    // 64 Bits
    cout << sizeof(salary) * 8 << " bits"<<endl;
    return 0;
}
/*
double salary = 5000.98;
// 8 Bytes
// 64 Bits
*/