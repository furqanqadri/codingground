#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 10

int a[MAXSIZE]={10,5,43,3423,1233,64,323,2121,6767,212};
void display(void);
void bubblesort(void);
void swap(int*,int*);
int main()
{
    printf("The input array is\n");
    display();
    printf("\n");
    
    bubblesort();
    printf("The sorted array is\n");
    display();
}

void bubblesort()
{
    int i,j;
    for(i=0;i<MAXSIZE-1;i++)
    {
        for(j=0;j<MAXSIZE-1-i;j++)
        {
            if(a[j]>a[j+1])
            swap(&a[j],&a[j+1]);
        }
    }
    return;
}

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
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