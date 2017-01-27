#include "sorting.h"

int a[MAXSIZE]={10,5,43,3423,1233,64,323,2121,6767,212};
void display(void);

int main()
{
    printf("The input array is\n");
    display();
    printf("\n");
    
    mergesort(a,MAXSIZE);
    printf("The sorted array is\n");
    display();
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