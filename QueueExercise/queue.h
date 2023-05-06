//
// Created by DELL on 7.05.2023.
//

#ifndef QUEUEEXERCISE_QUEUE_H
#define QUEUEEXERCISE_QUEUE_H
#include <iostream>

using namespace std;

template<class T>
class QueueNode {
public:
    T data;
    QueueNode *next;

    QueueNode(T data) {
        this->data = data;
        next = NULL;
    }
};

template<class T>
class Queue {
public:
    QueueNode<T> *head;
    QueueNode<T> *tail;

    Queue() {
        head = NULL;
        tail = NULL;
    }

    void enqueue(QueueNode<T> *node) {
        if (node != NULL) {
            if (isEmpty()) {
                head = node;
            } else {
                //Connect last element to new element
                tail->next = node;
            }
            // Move tail to last
            tail = node;
        } else {
            cout << "NULL element" << endl;
        }
    }

    QueueNode<T> *dequeue() {
        QueueNode<T> *data;
        if (!isEmpty()) {
            data = head;
            if (head == tail) {
                tail = NULL;
            }
            head = head->next;
            return data;
        } else {
            cout << "Can not dequeue" << endl;
            return NULL;
        }
    }

    bool isEmpty() {
        return head == NULL;
    }

    void printQueue() {
        cout << endl << "Queue" << endl;
        QueueNode<T> *tempHead = head;
        while (tempHead != NULL) {
            cout << tempHead->data << "->";
            tempHead = tempHead->next;
        }
        cout << endl;
    }

};
#endif //QUEUEEXERCISE_QUEUE_H
