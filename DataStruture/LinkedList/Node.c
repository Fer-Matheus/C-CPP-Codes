#include "Node.h"
#include <stdio.h>
#include <stdlib.h>

Node New(int idNode)
{
    Node node = (Node)malloc(sizeof(Node));
    node->id = idNode;
    node->next = NULL;
    node->previous = NULL;
    return node;
}
void ShowNode(Node node)
{
    printf("Id Node: %d\n", node->id);
}
void FreeNode(Node node)
{
    free(node);
}