#include "linkedList.h"
#include "stdio.h"
#include "stdlib.h"

//Initialize empty list.
int initializeList()
{
    head = NULL;
    tail = NULL;
    
    if(head == NULL && tail == NULL)
        return 0;
    
    return -1;
}

//Create a new list.
struct List *createList(int num)
{
    struct List *newPtr = malloc(sizeof(struct List));
    newPtr->num = num;
    newPtr->next = NULL;   
    if(newPtr != NULL)
        return newPtr;
    
    return newPtr = NULL;
}

//Insert new list to list.
int insertList(struct List *head, struct List *tail, struct List *createList)
{
    if(head == NULL && tail == NULL)
    {
        head = createList;
        tail = createList;
        return tail->num;
    }
    else
    {
        tail->next = createList;
        tail = createList;
        return tail->num;
    }
    
    return -1;
}