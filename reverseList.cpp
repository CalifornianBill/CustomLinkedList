#include"hw06a.h"

void reverseList(item *&first, int len)
{
  item *loop = NULL;
  item *next = NULL;
  item *previous = NULL;
  loop = first;
  while(loop != NULL)
  {
    next = loop->next;
    loop->next = previous;
    previous = loop;
    loop = next;
  }
  first = previous;
}
