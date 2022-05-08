#ifndef _HW06A_
#define _HW06A_

#include<iostream>

struct item
{
  item *next;
  int num;
};

void createList(item *first, int len);
void printList(item *first, int len);
void reverseList(item *&first, int len);

#endif
