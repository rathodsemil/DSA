#include<stdio.h>
 #define n 10
 int  a[10], i,j,r;

 int bubblesort (int t[],int r)
 {
    for(i=0;i < r;i++)
    {
     for(j=0;j < r-1;j++)
     {
       if(t[j]<t[j])
       {
        int k=t[j];
        t[j]=t[j+1];
        t[j+1]=k;
         }

     }
    }









 };



int main()
{

    for(i=0; i<n; i++)
    {
        a[i] = rand()%50 + 1;
    }

    for ( i =0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    bubblesort(a ,n);
    return 0;
}