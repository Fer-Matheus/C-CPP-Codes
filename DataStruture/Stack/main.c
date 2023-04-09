#include <stdio.h>
#include "Stack.c"

int main()
{
    int examples[] = {6, 4, 5, 78, 8, 9, 10};
    int input;
    printf("Enter a limit space for the stack:\n");
    scanf("%d", &input);

    Stack stack = New(input);
    if (IsEmpty(stack))
    {
        printf("Stack empty for now.\n\n");
    }
    else
    {
        printf("Have something here.\n\n");
    }
    printf("Top stack before the inputs: %d\n\n", ShowTop(stack));
    for (int i = 0; i < 7; i++)
    {
        Push(stack, examples[i]);
    }
    printf("Top stack after the inputs: %d\n\n", ShowTop(stack));

    printf("Show the entiring stack:\n");
    ShowStack(stack);

    int pop = Pop(stack);
    printf("Item poped from stack: %d\n", pop);

    printf("Show again the entiring stack:\n");
    ShowStack(stack);
    return 0;
}