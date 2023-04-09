#ifndef STACK_H
#define STACK_H

typedef struct aux {
	int top, limit;
	int *stack;
}*Stack;

Stack New(int);
int IsFull(Stack);
int IsEmpty(Stack);
int ShowTop(Stack);
void ShowStack(Stack);
int Push(Stack, int);
int Pop(Stack);
void FreeStack(Stack);

#endif
