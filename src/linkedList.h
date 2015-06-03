#ifndef linkedList_H
#define linkedList_H

//This list structure for linkedlist.
//list pointer:
//      head    is the list pointer always point to first list.
//      tail    is the list pointer always point to last list.
 struct List
 {
     int num;
     struct List *next;
};
struct List *head;
struct List *tail;

int initializeList();
struct List *createList(int num);
int insertList(struct List *head,struct List *tail, struct List *createList);

#endif // linkedList_H
