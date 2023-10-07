#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int a = 1;
    int b = 13;
    int c = 17;
    int d = 70;
    char e = d - a;

    cout << char(d - a) << char(c + d) << char(b + d);
    return 0;
}
// E 69
// W 87
// S 83
