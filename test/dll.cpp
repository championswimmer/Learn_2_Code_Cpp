#include <iostream>

using namespace std;

class DoubleLinkedList {
    struct node {
        int val;
        node* next = NULL;
        node* prev = NULL;
    };

    node* top = NULL;
    node* bottom = NULL;
    node* temp = NULL;

public:
    void printDLL() {
        cout << endl;
        if (top == NULL) {
            cout << " NO LL EXISTS";
            return;
        }
        temp = top;
        while (temp != NULL) {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
    }

    void addToTop (int val) {
        node* newNode = new node;
        newNode->val = val;
        if (top == NULL) {
            top = newNode;
            bottom = newNode;
        } else {
            top->prev = newNode;
            newNode->next = top;
            top = newNode;
        }
    }

    void removeFromBottom () {
        if (top == NULL) {
            cout << "NO LL EXISTS";
            return;
        }
        if (top == bottom) {
            top = NULL;
            bottom = NULL;
            return;
        }
        bottom->prev->next = NULL;
        bottom = bottom->prev;
    }
};

int main () {
    DoubleLinkedList* myList = new DoubleLinkedList;
    myList->printDLL();
    myList->addToTop(10);
    myList->printDLL();
    myList->addToTop(56);
    myList->printDLL();
    myList->addToTop(42);
    myList->printDLL();
    myList->removeFromBottom();
    myList->printDLL();
}