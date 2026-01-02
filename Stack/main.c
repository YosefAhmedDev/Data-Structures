#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
    Stack stack;
    create_stack(&stack);
    int input = -1;
    while (input != 5) {
        printf("----------MENU----------");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Print stack");
        printf("\n4. Print size");
        printf("\n5. Exit");
        printf("\n-----------------------");
        printf("\nEnter your choice: ");
        scanf("%d", &input);
        switch ((int)input) {
            case 1:{
                data_type element;
                printf("\nEnter element to be pushed: ");
                scanf(" %c", &element);
                push(&stack, element);
                break;
            }
            case 2:{
                printf("\nthe popped element is: %c\n", pop(&stack));
                break;
            }
            case 3:{
                print_stack(&stack);
                break;
            }
            case 4: {
                printf("\nThe size of the stack is %d", stack_size(&stack));
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