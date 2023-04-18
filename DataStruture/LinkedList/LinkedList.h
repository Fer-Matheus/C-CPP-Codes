#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

typedef struct list
{
  int size;
  Node first;
} *LinkedList;

LinkedList InitList();
LinkedList AddItem(LinkedList, Node);
void ShowList(LinkedList);
void DeleteItem(LinkedList, int);
void FreeLinkedList(LinkedList);
void IsHere(LinkedList, int);

#endif