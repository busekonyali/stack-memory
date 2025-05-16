#include <iostream>
using namespace std;

#define N 100

struct Queue {
    int Q[N];
    int frontt;
    int rear;
    int noitems;
};


void CreateQueue(Queue *queuee) {
    queuee->frontt=0;
    queuee->rear=0;
    queuee->noitems=0;
    }


bool isEmpty(Queue *queuee) {
    return  queuee->noitems== 0;
}

bool isFull(Queue *queuee) {
    return(queuee->noitems==N);
}
   /// Inserts a new item into the queue if there is space in the queue
void EnQueue(Queue *queuee, int newitem) {
    if (isFull(queuee)) {
        cout << "Queue is full" << endl;
        return;
    }
    //end-if

    queuee->Q[queuee->rear] = newitem;     // First put the new item.
    queuee->rear++;
    if (queuee->rear == N) queuee->rear = 0; // Now move rear
    queuee->noitems++;                     // One more item in the queue
}
//end-EnQueue

/// Removes the item at the front of the queue (If the queue is not empty) and
/// returns it. If the queue is empty, returns -1 (an error)
int DeQueue(Queue *queuee) {
    int idx = -1;

    if (isEmpty(queuee)) {
        cout << "Queue is empty";
        return -1;
    }
    //end-if

    idx = queuee->frontt;                 // This is where the first item is.
    queuee->frontt++;
    if (queuee->frontt == N) queuee->frontt = 0;  // Move front
    queuee->noitems--;                        // One less item in the Queue
    return queuee->Q[idx];
}
//end-DeQueue


int main() {
    Queue q;
    CreateQueue(&q);

    if (isEmpty(&q))
        cout<<"Queue is empty"<<endl; // Queue must be empty now.

    EnQueue(&q, 49);
    EnQueue(&q, 23);
    cout<<"Front of the queue is: "<< DeQueue(&q)<<endl;  // Must print 49Q
    EnQueue(&q, 44);
    EnQueue(&q, 22);

    cout << "Item at the front of the queue is: " << DeQueue(&q) << endl; // Must print 23
    cout << "Item at the front of the queue is: " << DeQueue(&q) << endl; // Must print 44
    cout << "Item at the front of the queue is: " << DeQueue(&q) << endl; // Must print 22
    cout << "Item at the front of the queue is: " << DeQueue(&q) << endl; // Must print -1

    if (isEmpty(&q))
        cout << "Queue is empty" << endl;  // Queue must be empty now.

    return 0;
}
