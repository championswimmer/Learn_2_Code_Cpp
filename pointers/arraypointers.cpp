//
// Created by championswimmer on 30/1/17.
//

#include "arraypointers.h"
#include <iostream>

using namespace std;

void arrPtr() {

    int arr[] = {1,2,3,4,5};
    int* ptrArr = new int[5];

    cout << "arr[1] = " << arr[1] << endl;
    cout << "arr = " << arr << endl;
    cout << "&arr = " << &arr << endl;
    cout << "*&arr = " << *&arr << endl;
    cout << "**&arr = " << **&arr << endl;
    cout << "*arr = " << *arr << endl;
    cout << "*(arr+1) = " << *(arr+1) << endl;


    cout << "ptrArr = " << ptrArr << endl;
    cout << "*ptrArr = " << *ptrArr << endl;

}
