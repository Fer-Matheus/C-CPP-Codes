#include "Node.h"
#include "LinkedList.h"
int main()
{

    LinkedList list = InitList();

    for (int i = 1; i <= 6; i++)
    {
        AddItem(list, New(i));
    }
    ShowList(list);
    DeleteItem(list, 4);
    ShowList(list);
    IsHere(list, 3);
    IsHere(list, 4);
    FreeLinkedList(list);
    return 0;
}