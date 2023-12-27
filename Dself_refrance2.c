#include<stdio.h>
struct node{
    int data;
    struct node *ptr;
};
struct node2{
    int data;
    char ch;
    struct node *ptr;
};




int main()
{
    struct node a,b;
   // struct node x,y;
    a.data = 65;
    a.ptr = NULL;

    b.data = 70;
    b.ptr = NULL;

     printf("A : data :%d\n",a.data);
     printf("B : data :%d\n",b.data);

    b.ptr = &a;

    a.ptr = &b;
    printf("A : data : %d\n",b.ptr->data);
    printf("B : data : %d\n\n\n",a.ptr->data);
  
  struct node2 x,y;
   x.data = 55;
   x.ch ="k";
   x.ptr = NULL;

    y.data = 99;
    y.ptr = NULL;

     printf("x : data :%d\t:char:%c\n",x.data,x.ch);
     printf("y : data :%d\n",y.data);

     y.ptr = &x;

    // x.ptr = &y;
    printf("x : data : %d\t:ch:%c\n",y.ptr->data);
   // printf("y : data : %d\n",x.ptr->data);

    
}