#include <iostream>

using namespace std;

struct node {
    int value;
    node* next;
};

node* addToTop (node* top, int val) {
    if (top == NULL) {
        top = new node;
        top->next == NULL;
        top->value = val;
        return top;
    } else {
        node* temp = new node;
        temp->value = val;
        temp->next = top;
        top = temp;
        return top;
    }
}

node* addToN(node* top, int val, int pos) {
    int count = 0;
    node* temp;
    temp = top;
    while (count < pos) {
        if (temp->next == NULL) {
            cout << "List ended before pos";
            return NULL;
        }
        temp = temp->next;
        count++;
    }
    node* newNode = new node;
    newNode->value = val;
    newNode->next = temp->next;
    temp->next = newNode;
    return top;
}

node* addToBottom (node* top, int val) {
    if (top == NULL) {
        top = new node;
        top->value = val;
        top->next = NULL;
    } else {
        node* temp = top;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        node* newNode = new node;
        newNode->value = val;
        newNode->next = NULL;
        temp->next = newNode;
    }

    return top;
}

node* removeTop(node* top) {
    if (top == NULL) {
        cout << " No linked list exists ";
        return NULL;
    }
    if (top->next == NULL) {
        cout << "Only one node removed, now no LL exists";
        return NULL;
    }
    return top->next;
}

node* removeBottom(node* top) {
    if (top == NULL) {
        cout << " No linked list exists ";
        return NULL;
    }
    if (top->next == NULL) {
        cout << "Only one node removed, now no LL exists";
        return NULL;
    }
    node* temp = top;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    temp->next = NULL;

    return top;
}

node* removeN(node* top, int pos) {

    if (top == NULL) {
        cout << " No linked list exists ";
        return NULL;
    }
    int count = 0;
    node* temp = top;
    while (count < (pos-1)) {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return top;
}

void printLL(node* top) {
    if (top == NULL) {
        cout << "No linked list exists" << endl;
        return;
    } else {
        while(top != NULL) {
            cout << top->value << " - ";
            top = top->next;
        }
    }
}

int main () {
    node* top = NULL;
    printLL(top);
    top = addToTop(top, 10);
    printLL(top);
    cout << endl;
    top = addToTop(top, 11);
    printLL(top);
    cout << endl;
    top = addToBottom(top, 20);
    printLL(top);
    cout << endl;
    top = addToN(top, 15, 1);
    top = addToN(top, 25, 2);
    top = addToN(top, 35, 2);
    printLL(top);
    cout << endl;
    top = removeTop(top);
    printLL(top);
    cout << endl;
    top = removeBottom(top);
    printLL(top);
    cout << endl;
    top = removeN(top, 1);
    printLL(top);
}