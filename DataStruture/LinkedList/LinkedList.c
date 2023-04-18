#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

LinkedList InitList()
{
    LinkedList list = (LinkedList)malloc(sizeof(LinkedList));
    list->size = 0;
    list->first = NULL;
    return list;
}
LinkedList AddItem(LinkedList list, Node node)
{
    if (list->first == NULL)
    {
        list->first = node;
        return list;
    }
    else
    {
        Node current = list->first;
        while (current->next != NULL)
        {
            current = current->next;
        }
        node->previous = current;
        current->next = node;
        list->size++;
        return list;
    }
    return list;
}
void ShowList(LinkedList list)
{
    if (list->first == NULL)
    {
        printf("This list is empty\n");
    }
    else
    {
        Node current = list->first;
        do
        {
            ShowNode(current);
            current = current->next;
        } while (current != NULL);
    }
}
void DeleteItem(LinkedList list, int id)
{
    if (list->first == NULL)
    {
        printf("Node not found!\n");
    }
    else
    {
        if (list->first->id == id)
        {
            Node next = list->first->next;
            FreeNode(list->first);
            list->first = next;
            printf("Delete success!\n");
        }
        else
        {
            Node current = list->first->next;
            do
            {
                if (current->id == id)
                {
                    if (current->next != NULL)
                    {
                        current->previous->next = current->next;
                        current->next->previous = current->previous;
                        FreeNode(current);
                        printf("Delete success!\n");
                        break;
                    }
                    current->previous = NULL;
                    FreeNode(current);
                    break;
                }
                current = current->next;
            } while (current != NULL);
        }
    }
}
void FreeLinkedList(LinkedList list)
{
    if (list->first == NULL)
    {
        printf("This list is already empty\n");
    }
    else
    {
        Node next;
        do
        {
            next = list->first->next;
            FreeNode(list->first);
            list->first = next;
        } while (list->first != NULL);
    }
}
void IsHere(LinkedList list, int id)
{
    Node current = list->first;
    do
    {
        if (current->id == id)
        {
            printf("This node is here!\n");
            break;
        }
        current = current->next;
    } while (current != NULL);
    if (current == NULL)
    {
        printf("This node isn't here!\n");
    }
}