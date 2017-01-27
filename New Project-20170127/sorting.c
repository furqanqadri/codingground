#include "sorting.h"

extern int a[];
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
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

