#ifndef LINKEDLIST_H
#ifndef LINKEDLIST_H

typedef struct list {
	int id;
	LinkedList *next;
}*LinkedList;

LinkedList New(LinkedList,int);
int AddItem(LinkedList,int);
void ShowList(LinkedList);
void FreeItem(LinkedList, int);
int IsHere(LinkedList, int);:
