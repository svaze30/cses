#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int val;
  struct Node *prev;
  struct Node *next;
  struct Node *child;
};
struct Node *createNode(int val)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->val = val;
  newNode->prev = NULL;
  newNode->next = NULL;
  newNode->child = NULL;
  return newNode;
}
struct Node *flatten(struct Node *head)
{
  if (head == NULL)
    return head;
  struct Node *curr = head;
  while (curr != NULL)
  {
    if (curr->child != NULL)
    {
      struct Node *next = curr->next;
      struct Node *childTail = flatten(curr->child);
      curr->next = curr->child;
      curr->child->prev = curr;
      if (next != NULL)
      {
        childTail->next = next;
        next->prev = childTail;
      }
      curr->child = NULL;
      curr = childTail;
    }
    if (curr->next == NULL)
      break;
    curr = curr->next;
  }
  return curr;
}

void printList(struct Node *head)
{
  struct Node *curr = head;
  while (curr != NULL)
  {
    printf("%d ", curr->val);
    curr = curr->next;
  }
  printf("\n");
}
int main()
{
  struct Node *head = createNode(1);
  head->next = createNode(2);
  head->next->prev = head;
  head->next->next = createNode(3);
  head->next->next->prev = head->next;
  head->next->child = createNode(4);
  head->next->child->next = createNode(5);
  head->next->child->next->prev = head->next->child;
  head->next->child->child = createNode(7);
  head->next->child->child->next = createNode(8);
  head->next->child->child->next->prev = head->next->child->child;
  head->next->child->next->next = createNode(9);
  head->next->child->next->next->prev = head->next->child->next;
  head->next->child->next->next->next = createNode(10);
  head->next->child->next->next->next->prev = head->next->child->next->next;
  head->next->next->next = createNode(6);
  head->next->next->next->prev = head->next->next;
  head->next->next->child = createNode(11);
  head->next->next->child->next = createNode(12);
  head->next->next->child->next->prev = head->next->next->child;
  printf("Original Doubly Linked List:\n");
  printList(head);
  struct Node *flattened = flatten(head);
  printf("\nFlattened Doubly Linked List:\n");
  printList(flattened);
  return 0;
}