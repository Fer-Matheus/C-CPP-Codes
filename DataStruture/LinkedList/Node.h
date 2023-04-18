#ifndef NODE_H
#define NODE_H

typedef struct aux
{
    int id;
    struct aux *next;
    struct aux *previous;
} *Node;

Node New(int);
void ShowNode(Node);
void FreeNode(Node);

#endif