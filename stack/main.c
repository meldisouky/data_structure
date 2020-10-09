#include "stackArrImp.h"

int main()
{
    int arr[5];
    stack_t stack;
    init_stack(&stack);

    // git 5 items from the user
    printf("Enter 5 items :: \n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < 5; i++)
    {
        push(arr[i], &stack);
    }

    stack_traverse(&stack, displayInt);
    return 0;
}