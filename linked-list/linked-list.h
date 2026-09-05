#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_
#include <stdlib.h>
#include <stdio.h>
typedef struct node_{
    int value;
    struct node_ *next;
} Node;
typedef struct list{
    Node* head;
}List;
void add(List* plist,int number);
void print(List* plist);
void delete_value(List* plist,int number);
#endif
