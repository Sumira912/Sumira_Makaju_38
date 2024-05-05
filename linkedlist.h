#pragma once
#include <iostream>
class node
{
    int data;
    node *next;
};

class linkedlist
{
private:
    node *head;
    node *tail;

public:
    linkedlist();
    ~linkedlist();
    bool isEmpty();
};