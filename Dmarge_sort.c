#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int l,int mid,int h)
{
    int b[15];
    int i=l, j=mid+1, k=l;
    while(i<=mid && j<=h)
    {
        if(a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else{
            b[k++] = a[j++];
        }
    }
    while(i<= mid)
    {
        b[k++] = a[i++];
    }
    while(j<= h)
    {
        b[k++] = a[j++];
    }
    for(i = l;i <= h;i++)
    {
        a[i] = b[i];
    }
}
int mergesort(int a[], int l, int h)
{
    int mid;
    if(l < h)
    {
        mid = (l+h) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}
int main()
{
    int a[15]={10,20,30,50,80,90,50,60,70,50,60,22,33,55,66};
    int n = 15, i;
     for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    mergesort(a, 0, n-1);
    printf("\nAfter sorting Array is : \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}
