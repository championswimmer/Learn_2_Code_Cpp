#include <iostream>
using namespace std;
int main () {
    int a = 10;
    float b = (float) a;
    int c = (int) b;

    float d = 11.89;
    int e = (int) d;

    int p = 20;
    float fp = p;

    float ff = 20.45;
    int ii = ff;

    char ch = '0';
    int ih = ch;

    int im = 70;
    char cm = im;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;

    cout << fp << endl;
    cout << ii << endl;

    cout << ch << endl;
    cout << ih << endl;

    cout << cm << endl;
}