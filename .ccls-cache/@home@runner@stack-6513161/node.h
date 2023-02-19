#include <stdio.h>
#include <stdlib.h>
//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa
//

#ifndef linkedlist_h
#define linkedlist_h
struct node
{
    int data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;

/*void push(NodePtr *top, int x)
{
  NodePtr  new_node;
  new_node=(NodePtr)malloc(sizeof(Node));
  if(new_node)
  {
    new_node->data=x;
    new_node->nextPtr=*top;
    *top=new_node;
  }
  else{
    printf("%d not inserted. No memory available.\n",x);
  }
}

int pop(NodePtr* top) {
  NodePtr temp=*top;
  if(*top){
  int value= temp->data;
  *top=temp->nextPtr;
  free(temp);
  return value;
    }
  else{
    printf("Error can't Pop\n");
    return 0;
  }
}
*/
#endif
