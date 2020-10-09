#include "stackArrImp.h"

void init_stack  (stack_t *stack)
{
    stack->top = 0;
}

void push (stackEntry_t item, stack_t *stack)
{
    stack->entry[stack->top++] = item;
}

void pop (stackEntry_t *var, stack_t *stack)
{
    *var = stack->entry[--stack->top];
}

int stack_is_full (stack_t *stack)
{
    return (stack->top >= MAX_STACK);
}

int stack_is_empty (stack_t *stack)
{
    return (stack->top <= 0);
}

void stack_top (stackEntry_t *var, stack_t *stack)
{
    *var = stack->entry[stack->top-1];
}

int stack_size (stack_t *stack)
{
    return stack->top;
}

void stack_clear (stack_t *stack)
{
    stack->top = 0;
}

void stack_traverse (stack_t *stack, displayFptr display)
{
    for(int i = (stack->top - 1); i >= 0; i--)
    {
        printf("%d  ", stack->entry[i]);
    }

}

void displayInt (stackEntry_t *item)
{
    printf("%d  ", *item);
}