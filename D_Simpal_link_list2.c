#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr =head;
    struct node *temp = malloc (sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        return;
    }
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}
void Firstinsert(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = ptr;
    head = temp;
    return;
}
void Fisrtdelete()
{
     struct node *ptr = head;
    if(ptr->next  == NULL)
    {
        printf("List is empty...");
    }
    head = ptr->next;
    free(ptr);
    return;
}
void midlinsert(int val)
{
 struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = ptr;
    
    }
void deleteEnd()
{
    struct node *ptr =head;
    struct node *p;
    if(ptr->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while(ptr->next != NULL)
    {
        p=ptr;
        ptr=ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}
void display()
{
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("List is Empty...");
    }
    else{
        while(ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
int main()
{
    int ch;
    printf ("\n1. Display     :");
    printf ("\n2. InsertEnd   :");
    printf ("\n3. DeleteEnd   :");
    printf ("\n4. Firstinsert :");
    printf ("\n5. Firstdelete :");
    printf ("\n0. End Program :");
    printf ("\n");
    do{
        int x;
        printf("Enter your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    display();
                    break;
            case 2:
                    printf("Enter Value :");
                    scanf("%d",&x);
                    insertEnd(x);
                    break;
            case 3:
                    deleteEnd();
                    break;
            case 4 :
                    printf ("Enter  value :");
                    scanf("%d",&x);
                    Firstinsert(x);
                    break;
            case 5:
                    Fisrtdelete();
                    break;
            case 0:
                    printf("Program is closed.");
                    break;
            default:
                    printf("You Enter Wrong Choice.");
                    break;
        }
    }while(ch!=0);
}