#include "linkedlist.h"
bool linkedlist ::isEmpty()
{
    if (head == tail)
    {
        return true;
    }
    return false;
}

void linkedlist ::addtohead(int data)
{
    node *newnode = new node;
    newnode->info = data;
    newnode->next = head;
    head = newnode;
    if (tail == NULL)
    {
        tail = head;
    }
}