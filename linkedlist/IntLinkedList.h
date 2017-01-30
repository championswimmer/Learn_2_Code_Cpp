//
// Created by championswimmer on 31/1/17.
//

#ifndef LINKEDLIST_INTLINKEDLIST_H
#define LINKEDLIST_INTLINKEDLIST_H


class IntLinkedList {

    struct node {
        int val;
        node* next;
    };

    node* top = nullptr;

public:
    void addToTop (int num);
    void printList ();

};


#endif //LINKEDLIST_INTLINKEDLIST_H
