#include "sorting.h"
#include "linked_list.h"

int a[MAXSIZE]={10,5,43,3423,1233,64,323,2121,6767,212};
void display(void);

#define BITS(x,p,n)\
x^(~(~0<<(p+1)) & (~0<<(p+1-n)));

#define BITS1(x,p,n)\
x ^ ((~(~0<<n))<< p+1-n);

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c\n"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0') 

int main()
{
  //Bit wise MACROS
  int x=35;
  int y=BITS1(x,3,4);
  printf("x is %d\n",x);
  printf("x in binary\n "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(x));
  printf("y is %d\n",y);
  printf("y in binary\n "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(y));
   // linked_list();
    /*
    printf("The input array is\n");
    display();
    printf("\n");
    //bubblesort();
    //mergesort(a,MAXSIZE);
    //q_sort(a,0,MAXSIZE-1);
    insert_sort();
    printf("The sorted array is\n");
    display();
    */
}


void display()
{
    int i;
    for(i=0;i<MAXSIZE;i++)
    {
        printf("%d\t",a[i]);
    }
        printf("\n");
}