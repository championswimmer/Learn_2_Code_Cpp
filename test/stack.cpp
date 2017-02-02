#include <iostream>

using namespace std;

class Stack {
    struct node {
        int val;
        node* next = NULL;
        node* prev = NULL;
    };

    node* top = NULL;
    node* bottom = NULL;
    node* temp = NULL;

public:
    void printStack() {
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

    void push (int val) {
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

    int pop () {
        if (top == NULL) {
            cout << "NO STACK EXISTS";
            return;
        }
        if (top == bottom) {
            top = NULL;
            bottom = NULL;
            return;
        }
        top->next->prev = NULL;
        int retVal = top->val;
        top = top->next;
        return retVal;
    }
};

int main () {
    Stack* myStack = new Stack;
    myList->printStack();
    myList->push(10);
    myList->printStack();
    myList->push(56);
    myList->printStack();
    myList->push(42);
    myList->printStack();
    myList->pop();
    myList->printStack();
}