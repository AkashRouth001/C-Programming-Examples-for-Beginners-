#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node 
    {
        int data;
        struct node * next;
    };
   /* struct node
 {
	int info;
	struct node *link;
 }*last = NULL;*/

    struct node *head,*temp,*newnode;// creating the head , temp node and newnode
    head = 0; // 1st there is no node so head is NULL
    int choice=1;
    while(choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the data :");
        scanf("%d",&newnode->data);
        newnode -> next=0;

        if(head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp -> next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue enter the '1' nither'0' :");
        scanf("%d",&choice);

    }
    // printing part.....
    temp = head;
    while(temp !=0)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
   getch();
}