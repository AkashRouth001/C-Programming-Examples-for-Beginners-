//stack using link list.
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node*top=0;
void push(int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = x;
    newnode -> next = top;
    top = newnode;
}
void display()
{
    struct node *temp;
    temp = top;
    if(temp ==0)
    {
        printf("the empty");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d ",temp -> data);
            temp = temp ->next;
        }
    }
}
void peek()
{
    if(top ==0)
    {
        printf("empty");
    }
    else
    {
        printf("top = %d",top->data);
    }
}
void pop()
{
    struct node*temp;
    temp = top;
    if(top ==0)
    {
        printf("empty");
    }
    else
    {
        printf("%d",top->data);
        top = top ->next;
        free(temp);
    }
}

int main() 
{
    int choice,value;
    printf("\nImplementation of Stack using Linked List\n");
    while (1) {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
}