#include<stdio.h>
#include<conio.h>
void main()
{
  
 int arry[5][5],total=0;
   
   for(int i=0;i<=2;i++)
    {
     for(int j=0;j<=2;j++)
     {
      printf("enter arry[%d][%d]",i,j);
      scanf("%d",&arry[i][j]);
      }
     }

   for(int i=0;i<=2;i++)
    {
     for(int j=0;j<=2;j++)
     {
       if(i==j)
        {
         total=total+arry[i][j];  
         }
      else
        { 
        printf("\t%d",arry[i][j]);
        }
      
       }
     printf("\n");
   }
  printf("diagonal elementtotal:%d",total);
}


