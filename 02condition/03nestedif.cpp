#include <iostream>

using namespace std;

int main() {

    int a,b,c;

    cin >> a >> b >> c;

    if (a>b) {
        if (a>c) {
            cout << "a largest";
        } else {
            cout << " c largest";
        }
    } else {
        if (b > c) {
            cout << " b largest";
        } else {
            cout << " c largest ";
        }
    }
}
