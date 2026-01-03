#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void CreateQueue(Queue* queue) {
    queue->front = 0;
    queue->rear = -1;
    queue->size = 0;
}

int isQueueEmpty(Queue* queue) {
    return queue->size == 0;
}

int isQueueFull(Queue* queue) {
    return queue->size == MAX;
}

void Enqueue(Queue* queue, data_type element) {
    if (isQueueFull(queue)) {
        printf("Queue is full\n");
        return;
    }
    queue->rear = (queue->rear + 1) % MAX;
    queue->data[queue->rear] = element;
    queue->size+=1;
}

data_type Dequeue(Queue* queue) {
    if (isQueueEmpty(queue)) {
        printf("Queue is empty\n");
        return '$';
    }
    data_type temp = queue->data[queue->front];
    queue->front = (queue->front + 1) % MAX;
    queue->size-=1;
    return temp;
}

data_type PeekFront(Queue* queue) {
    if (isQueueEmpty(queue)) {
        printf("Queue is empty\n");
        return 0;
    }
    return queue->data[queue->front];
}

data_type PeekRear(Queue* queue) {
    if (isQueueEmpty(queue)) {
        printf("Queue is empty\n");
        return 0;
    }
    return queue->data[queue->rear];
}

void Destroy(Queue* queue) {
    free(queue->data);
    free(queue);
}

void CopyQueue(Queue* queue, Queue* dest) {
    for (int i = 0; i < queue->size; i++) {
        dest->data[i] = queue->data[i];
    }
}

void PrintQueue(Queue* queue) {
    for (int i = 0; i < queue->size; i++) {
        printf("%c ", queue->data[i]);
    }
    printf("\n");
}

int QueueSize(Queue* queue) {
    return queue->size;
}
