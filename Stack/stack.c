#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void create_stack(Stack* stack) {
    stack->top = -1;
}

void push(Stack* stack, data_type element) {
    stack->top++;
    stack->data[stack->top] = element;
}

data_type pop(Stack* stack) {
    data_type temp = stack->data[stack->top];
    stack->top--;
    return temp;
}

int is_empty(Stack* stack)  {return stack->top == -1;}

int is_full(Stack* stack) {return stack->top == MAX-1;}

int stack_size(Stack* stack) {return stack->top + 1;}

void destroy_stack(Stack* stack) {stack->top = -1;}

data_type peek(Stack* stack) {
    return stack->data[stack->top];
}

data_type peek_bottom(Stack* stack) {
    return stack->data[0];
}

void print_stack(Stack* stack) {
    int temp = stack->top;
    while (temp >= 0) {
        printf("%c", stack->data[temp]);
        temp--;
    }
    printf("\n");
}

void copy_stack(Stack* copied, Stack* copied_into) {
    destroy_stack(copied_into);
    for (int i = 0; i <= copied->top; i++) {
        push(copied_into, copied->data[i]);
    }

}
