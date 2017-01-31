//
// Created by championswimmer on 31/1/17.
//

#include <iostream>
#include "IntLinkedList.h"
#include "LinkedList.h"

int main () {
    IntLinkedList ill = *(new IntLinkedList);

    ill.printList();
    ill.addToTop(10);
    ill.printList();
    ill.addToTop(11);
    ill.printList();

    LinkedList<int> linkedList = new LinkedList<int>;
}

