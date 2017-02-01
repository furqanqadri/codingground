#include<stdio.h>
#include "linked_list.h"
#include<stdlib.h>
#include"stack.h"



node*  list;
node *top;



node* top=NULL; 

void my_stack()
{
  extern node* head;
  
  //Create list
  insert(1,20);
  insert(2,34);
  insert(3,24);
  insert(4,89);
  insert(5,47);
  print();
  int data;
  node* top=head;
  node* temp=head;
  while(temp!=NULL)
  {
    my_push(temp->data);
    temp=temp->next;
  }
  while((data=my_pop())!=-1){
 
  printf("Popped data is %d \t",data);
  }
  char string[]="HELLO";
  int i=0;
  while(string[i]!='\0')
  {
    my_push(string[i]);
    i++;
  }
  i=0;
  while((data=my_pop())!=-1)
  {
  if(data!='\0')  string[i]=data;
  printf("Popped data is %c \t",data);
  i++;
  }
  string[i]='\0';
  printf("%s\n",string);
}

int isEmpty()
{
  if(top==NULL)return 1;
  return 0;
}

void my_push(int data)
{
  node* item= (node*) malloc(sizeof(node));
  item->data=data;
  item->next=top;
  top=item;
}

int my_pop()
{
  if(isEmpty()) 
  {
  return -1;
}
  node* temp=top; 
  int data= top->data;
  top=top->next;
  free(temp);
  return data;
}
  
