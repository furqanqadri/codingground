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

void mergesort(int m_arr[],int len)
{
    if (len==1) return;
    int i,size_l,size_r;
    //break array into two halves
    
    size_l=len/2;
    size_r=len-len/2;
    int l[size_l],r[size_r];
    
    for(i=0;i<size_l;i++)
        l[i]=m_arr[i];
    
    for(i=0;i<size_r;i++)
        r[i]=m_arr[i+size_l];
        
    mergesort(l,len/2);
    mergesort(r,len-len/2);
    
    merge(l,size_l,r,size_r,m_arr);
    
}

void merge(int* l,int size_l,int* r,int size_r,int *c)
{
    
    int i,j;
    int k=0;
    for(i=0,j=0;i<size_l && j<size_r;k++)
    {
        if(l[i]>r[j])
        {
            c[k]=r[j];
            j++;
        }
        else
        {
            c[k]=l[i];
            i++;
        }
    }
    for(;j<size_r;k++)
    {
        c[k]=r[j];
        j++;
    }    
    
    for(;i<size_l;k++)
    {
        c[k]=l[i];
        i++;
    }  

}



