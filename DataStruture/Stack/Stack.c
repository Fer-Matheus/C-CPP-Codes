#include <stdio.h>
#include "Stack.h"
#include <stdlib.h>

Stack New(int qtde)
{
    Stack new = (Stack)malloc(sizeof(Stack));
    new->top = 0;
    new->limit = qtde;
    new->stack = (int *)malloc(sizeof(int *) * qtde);
    return new;
}
int IsFull(Stack stack)
{
    if (stack->limit == stack->top)
    {
        return 1;
    }
    return 0;
}
int IsEmpty(Stack stack)
{
    if (stack->top == 0)
    {
        return 1;
    }
    return 0;
}
int ShowTop(Stack stack)
{
    return stack->stack[stack->top];
}
void ShowStack(Stack stack)
{
    int temp = stack->top;
    while (temp > 0)
    {
        printf("%d ", stack->stack[temp]);
        temp--;
    }
    printf("\n\n");
}
int Push(Stack stack, int new)
{
    if (!IsFull(stack))
    {
        stack->stack[++stack->top] = new;
        return 0;
    }
    return 1;
}
int Pop(Stack stack)
{
    if (!IsEmpty(stack))
    {
        int pop = stack->stack[stack->top];
        stack->stack[stack->top] = 0;
        stack->top--;
        return pop;
    }
    return 1;
}
void FreeStack(Stack stack)
{
    free(stack);
}
