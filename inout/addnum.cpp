//
// Created by championswimmer on 23/1/17.
//
#include <iostream>
#include "addnum.h"

using namespace std;

void addNums(int quantity) {

    int sum = 0;
    for (int i = 0; i < quantity; i++) {
        int e;
        cin >> e;
        sum += e;
    }

    cout << "Sum = " << sum;
}
