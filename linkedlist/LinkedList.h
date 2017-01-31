//
// Created by championswimmer on 31/1/17.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

template <class T>

class LinkedList<typename T> {

    struct Node {
        T val;
        Node* next;
    };

    Node* top;

};


#endif //LINKEDLIST_LINKEDLIST_H
