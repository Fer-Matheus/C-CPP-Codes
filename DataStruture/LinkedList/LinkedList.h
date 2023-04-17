#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct aux{
  int id;
  No next;
}*No;

typedef struct list {
	int size;
	No first;
}*LinkedList;

LinkedList InitList();
LinkedList AddItem(LinkedList,int);
void ShowList(LinkedList);
void DeleteItem(LinkedList, int);
void FreeLinkedList(LinkedList);
int IsHere(LinkedList, int);

#endif