#include <iostream>

using namespace std;

int main () {
    int a = 10;
    cout << a << endl ;
    cout << &a << endl ;

    int* p = &a;
    cout << p << endl;
    cout << *p << endl;
    p++;
    cout << *p << endl;

    p = p - 10000;
    cout << *p << endl;

    int arr[] = {1,2,3,4,5};
    cout << arr << endl;
    cout << &arr[1] << endl;

    int* prr = arr;
    (*(prr + 2))++;
    cout << *(prr + 2) << endl;

}