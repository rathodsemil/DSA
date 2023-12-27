
//self refrance
#include <stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node a,b;
    a.data = 50;
    a.ch = 'A';
    a.ptr = NULL;
   
    b.data = 10;
    b.ch = 'Z';
    b.ptr = NULL;

    a.ptr = &b;
    printf("B:Data:%d\t,Ch:%c\n",a.ptr->data,a.ptr->ch);

    b.ptr = &a;
    printf("B:Data:%d\t,Ch:%c",b.ptr->data,b.ptr->ch);

}
