//
//  LinkedList.cpp
//  cs2370-002-2025f
//
//  Created by Rita Kuo on 10/22/25.
//
#include <iostream>
#include "LinkedListNode.h"
using namespace std;

class LinkedList {
private:
    LinkedListNode *head;
public:
    LinkedList() : head(nullptr) {}
    ~LinkedList();
    void Prepend(int data);
    void Print();
};

LinkedList::~LinkedList() {
    LinkedListNode *next = nullptr;
    while (head != nullptr) {
        next = head->next;
        delete head;
        head = next;
    }
}

void LinkedList::Prepend(int data) {
    LinkedListNode *node = new LinkedListNode(data);
    node->next = head;
    head = node;
    
}

void LinkedList::Print() {
    if (head == nullptr) {
        cout << "Empty List" << endl;
    } else {
        LinkedListNode *node = head;
        for (; node != nullptr; node = node->next)
            cout << node->data << " ";
        cout << endl;
    }
}


/*int main() {
    LinkedList list;
    list.Prepend(1);
    list.Prepend(2);
    list.Prepend(3);
    list.Prepend(4);
    list.Print();
    list.Print();
    return 0;
}*/
