#ifndef QUEUE_H
#define QUEUE_H

#define MAX 100
typedef char data_type;

typedef struct {
    data_type data[MAX];
    int front;
    int rear;
    int size;
} Queue;

void CreateQueue(Queue* queue);
int isQueueEmpty(Queue* queue);
int isQueueFull(Queue* queue);
void Enqueue(Queue* queue, data_type element);
data_type Dequeue(Queue* queue);
data_type PeekFront(Queue* queue);
data_type PeekRear(Queue* queue);
void PrintQueue(Queue* queue);
int QueueSize(Queue* queue);

#endif