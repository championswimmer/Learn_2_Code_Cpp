//
// Created by championswimmer on 23/1/17.
//
#include <iostream>

#include "basicptrs.h"

using namespace std;

void doPtrOps () {
    int a = 10;
    cout << "Value of a = " << a << endl;
    cout << "Pointer to a = " << &a << endl;
    cout << "Value of data at pointer to a = " << *&a << endl;
}
