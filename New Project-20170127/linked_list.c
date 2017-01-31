#include<stdio.h>
#include "linked_list.h"
#include<stdlib.h>


typedef struct Node{
  int data;
  struct Node* next;
}node;

node* head=NULL;

void linked_list()
{
  insert(1,10);
  insert(2,34);
  insert(3,24);
  insert(4,89);
  insert(5,47);
  print();
  print_reverse(head);
  
 // delete(2);
  //print();
  //head=reverse();
  //print();
  
}

void print_reverse(node* head)
{
  while(head==NULL)
  {
    return;
  }
  
  print_reverse(head->next);
  printf("%d\t",head->data);
  
}


void insert(int pos, int data)
{
  
  int i;
  node *temp1;
  node* temp= (node*)malloc(sizeof(node));
  temp->data=data;
  temp->next=NULL;
  if(head==NULL && pos==1){
    head=temp;
    return;
  }
  temp1=head;
  for(i=0;i<pos-2;i++)
  {
    temp1=temp1->next;
  }
  temp->next=temp1->next;
  temp1->next=temp;
}

void print()
{
  node *temp=head;
  while(temp!=NULL)
  {
  printf("%d\t %p\t ",temp->data,temp->next);
  temp=temp->next;
  }
  printf("\n");
}

void delete(int pos)
{
  int i;
  node *temp=head;
  node *temp1;
  for(i=0;i<pos-2;i++)
  {
    temp=temp->next;
  }
  temp1=temp->next;
  temp->next=temp1->next;
  free(temp1);  
}

node *reverse()
{
  node *current=head;
  node *prev=NULL;
  node *next;
  while(current!=NULL)
  {
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
  }
  head=prev;
  return head;
}