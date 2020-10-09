#ifndef __STACK_ARRAY_IMPLEMENTATION_H__
#define __STACK_ARRAY_IMPLEMENTATION_H__

#include <stdio.h>

#define MAX_STACK 100

typedef int stackEntry_t;
typedef void (*displayFptr)(stackEntry_t *item);
typedef struct _stack
{
    stackEntry_t entry[MAX_STACK];
    int top;
}stack_t;

/** Functions prototypes **/
void init_stack  (stack_t *stack);
void push        (stackEntry_t item, stack_t *stack);
void pop         (stackEntry_t *var, stack_t *stack);

int stack_is_full  (stack_t *stack);
int stack_is_empty (stack_t *stack);

void stack_top   (stackEntry_t *var, stack_t *stack);
int stack_size   (stack_t *stack);
void stack_clear (stack_t *stack);

void stack_traverse (stack_t *stack, displayFptr display);


/////
void displayInt (stackEntry_t *item);

#endif //__STACK_ARRAY_IMPLEMENTATION_H__