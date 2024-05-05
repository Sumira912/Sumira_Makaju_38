#include "linkedlist.h"
bool linkedlist ::isEmpty()
{
    if (head == tail)
    {
        return true;
    }
    return false;
}