#include"hw06a.h"

int main()
{
  int listLen = 10;

  item *iptr = NULL;
  item *loop = NULL;
  item *first = NULL;
  first = new item;
  first->num = 0;
  first->next = NULL;

  std::cout << "Creating Linked List" << std::endl;
  createList(first, listLen);
  printList(first, listLen);
  
  std::cout << "Reversed List" << std::endl;
  reverseList(first, listLen);
  printList(first, listLen);
  
  loop = first;
  while(loop != NULL)
    {
      iptr = loop->next;
      delete loop;
      loop = iptr;
    }
  return 0;
}
