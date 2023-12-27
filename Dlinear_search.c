#include<stdio.h>
#include<stdlib.h>
#define n 6


int linearSearch(int a [], int x)
{
    for (int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i++;
        }
    }
    return 0;
}
int main()
{
    int a[n],i,num;
    for(i=0;i<n;i++)
    {
        a[i]=rand()%60+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter Search number :");
    scanf("%d",&num);

    
    int m= linearSearch(a,num);
    if(m==0)
    {
        printf("number is not found :");

    }
    else
    {
        printf("search number found at %d position ",m);
    }
    
}
                     
