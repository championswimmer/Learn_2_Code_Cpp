//
// Created by championswimmer on 31/1/17.
//

#include "IntLinkedList.h"
#include <iostream>

using namespace std;

void IntLinkedList::addToTop(int num) {

    node *newNode = new node;
    newNode->val = num;
    newNode->next = top;
    top = newNode;

}

void IntLinkedList::printList() {
    cout << endl;
    if (top == nullptr) {
        cout << "List does not exist";
        return;
    }
    node* temp = top;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }

}