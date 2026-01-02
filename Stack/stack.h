#ifndef STACK_H
#define STACK_H

#define MAX 100
typedef char data_type;

typedef struct{
    data_type data[MAX];
    int top;
} Stack;

void create_stack(Stack* stack);
void push(Stack* stack, data_type element);
data_type pop(Stack* stack);
int is_empty(Stack* stack);
int is_full(Stack* stack);
void print_stack(Stack* stack);
int stack_size(Stack* stack);

#endif
