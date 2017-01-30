//
// Created by championswimmer on 23/1/17.
//
#include <iostream>
#include "ptrargs.h"


using namespace std;

void passByValue(int a) {
    cout << "a = " << a << endl;
    a++;
}

void passPointer(int *a) {
    cout << "a = " << a << endl;
    (*a)++;
}

void passByReference(int& a) {
    cout << " a = " << a << endl;
    a++;
}

void ptrArgs() {
    int m = 10, n = 20, o = 30;
    passByValue(m);
    passPointer(&n);
    passByReference(o);
    cout << "m = " << m << endl;
    cout << "n = " << n << endl;
    cout << "o = " << o << endl;
}