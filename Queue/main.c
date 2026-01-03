#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main() {
    Queue queue;
    CreateQueue(&queue);
    int input = -1;
    while (input != 5) {
        printf("----------MENU----------");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Print queue");
        printf("\n4. Print size");
        printf("\n5. Exit");
        printf("\n-----------------------");
        printf("\nEnter your choice: ");
        scanf(" %d", &input);
        switch ((int)input) {
            case 1:{
                data_type element;
                printf("\nEnter element to be queued: ");
                scanf(" %c", &element);
                Enqueue(&queue, element);
                break;
            }
            case 2:{
                printf("\nthe dequeued element is: %c\n", Dequeue(&queue));
                break;
            }
            case 3:{
                PrintQueue(&queue);
                break;
            }
            case 4: {
                printf("\nThe size of the stack is %c\n", QueueSize(&queue));
                break;
            }
            case 5: {
                exit(0);
            }
            default: {
                printf("\nWrong choice. Please try again.\n");
                break;
            };
        }
    }
    return 0;
}