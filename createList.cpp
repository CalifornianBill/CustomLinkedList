#include"hw06a.h"

void createList(item *first, int len)
{
  item *iptr = NULL;
  item *loop = NULL;
  iptr = first;
  for(int x=1; x<=len; x++)
  {
    loop = new item;
    loop->num = x;
    loop->next = NULL;
    iptr->next = loop;
    iptr = loop;
  } 
}
