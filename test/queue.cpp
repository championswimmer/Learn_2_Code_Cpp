#include <iostream>

using namespace std;

class Queue {
    struct node {
        int val;
        node* next = NULL;
        node* prev = NULL;
    };

    node* top = NULL;
    node* bottom = NULL;
    node* temp = NULL;

public:
    void printQueue() {
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

    void queue (int val) {
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

    int dequeue () {
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
        int retVal = bottom->val;
        bottom = bottom->prev;
        return retVal;

    }
};

int main () {
    Queue* myQueue = new Queue;
    myList->printQueue();
    myList->queue(10);
    myList->printQueue();
    myList->queue(56);
    myList->printQueue();
    myList->queue(42);
    myList->printQueue();
    myList->dequeue();
    myList->printQueue();
}