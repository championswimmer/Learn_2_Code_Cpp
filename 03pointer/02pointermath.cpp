#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 20, c = 30;

    cout << " a-b " << (a-b) << endl;

    cout << " &c - &a " << (&c - &a) << endl;
    cout << " &b - &a " << (&b - &a) << endl;
}
