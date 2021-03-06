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


void q_sort(int *a,int start, int end)
{
  int pindx;
  if(start>=end) return;
  pindx=partition(a,start,end);
  q_sort(a,start,pindx-1);
  q_sort(a,pindx+1,end);
  return;
}


int partition(int *a,int start, int end)
{
  int i;
  int pivot=a[end];
  int pindx=start;
 
  for(i=start;i<end;i++)
  {
      if(a[i]<=pivot)
      {
      swap(&a[i],&a[pindx]);
      pindx++;
      }
  }
  swap(&a[pindx],&a[end]);
  return pindx;
}

void insert_sort()
{
  int hole,i;
  int value_to_insert;
  for(i=1;i<MAXSIZE;i++)
  {
    value_to_insert=a[i];
    hole=i;
    /*compare against prev elemt*/
    while(hole>0 && a[hole-1]>value_to_insert)
    {
        a[hole]=a[hole-1];
        hole--;
    }
    if(hole!=i)
      a[hole]=value_to_insert;
  }
}

  
    
























