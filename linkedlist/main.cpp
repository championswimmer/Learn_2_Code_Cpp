//
// Created by championswimmer on 31/1/17.
//

#include <iostream>
#include "IntLinkedList.h"

int main () {
    IntLinkedList ill = *(new IntLinkedList);

    ill.printList();
    ill.addToTop(10);
    ill.printList();
    ill.addToTop(11);
    ill.printList();
}

