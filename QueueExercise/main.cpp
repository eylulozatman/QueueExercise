#include "queue.h"

int main(){
    Queue<char> queue = Queue<char>();
    QueueNode<char> node1 = QueueNode<char>('a');
    QueueNode<char> node2 = QueueNode<char>('b');
    QueueNode<char> node3 = QueueNode<char>('c');
    QueueNode<char> node4 = QueueNode<char>('d');
    QueueNode<char> node5 = QueueNode<char>('e');
    QueueNode<char> node6 = QueueNode<char>('f');
    queue.enqueue(&node1);
    queue.enqueue(&node2);
    queue.enqueue(&node3);
    queue.enqueue(&node4);
    queue.enqueue(&node5);
    queue.printQueue();
    cout << endl << "Dequeue Element" << endl;
    QueueNode<char> *removedElement = queue.dequeue();
    cout << "Removed Element Data : " << removedElement->data << endl;
    queue.printQueue();
    cout << endl << "Dequeue Element" << endl;
    removedElement = queue.dequeue();
    cout << "Removed Element Data : " << removedElement->data << endl;
    queue.printQueue();
    cout << endl << "Dequeue Element" << endl;
    removedElement = queue.dequeue();
    cout << "Removed Element Data : " << removedElement->data << endl;
    queue.printQueue();
    cout << endl << "Enqueue Element" << endl;
    queue.enqueue(&node6);
    queue.printQueue();
    cout << endl << "Dequeue Element" << endl;
    removedElement = queue.dequeue();
    cout << "Removed Element Data : " << removedElement->data << endl;
    queue.printQueue();


    return 0;
}


