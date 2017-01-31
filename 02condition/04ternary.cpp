#include <iostream>

using namespace std;

int main() {
    int a,b,c;

    cin >> a >> b >> c;

    int larger = (a > b) ? a : b;
    int largest = (c > larger) ? c : larger;

    cout << largest;
}
