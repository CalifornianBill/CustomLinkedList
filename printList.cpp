#include"hw06a.h"

void printList(item *first, int len)
{
  item *loop = NULL;
  item *iptr = NULL;
  loop = first;
  while(loop != NULL)
  {
    std::cout << loop->num << ", ";
    loop = loop->next;
  }
  std::cout << std::endl;
}
