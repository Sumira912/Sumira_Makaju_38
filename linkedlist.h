#pragma once
#include <iostream>
class node
{
public:
    int info;
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
    void addtohead(int data);
    void addtotail(int data);
};