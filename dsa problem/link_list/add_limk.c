#include<stdio.h>
#include<stdlib.h>
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  
void getlength ()
{
   
    //.................................................................
    /* temp pointer points to head */
    struct node *head;
    struct node* temp;
    temp = head;
    /* Initialize count variable  */
    int count=0;
    /* Traverse the linked list and maintain the count */
    while(temp != NULL){
    temp = temp->next;
    /* Increment count variable. */
    count++;
    }
    /* Print the total count. */
    printf("\n Total no. of nodes is %d",count);
    //.........................................................................
}

void add_begning()
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the data add beginning :");
    scanf("%d",&newnode->data);
    newnode ->next=head;
    head = newnode;
}

void add_end()
{
    struct node *newnode,*temp;

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the data u want to insert :");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp ->next = newnode;
    
}
void add_any()
{
    int pos,i=1;
   struct node *newnode;
    int total=getlength;
    

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the position to enter the data :");
    scanf("%d",&pos);
    if(pos>total)
    {
        printf(" ....invalide position ....");
    }

    
}

void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}
void main ()  
{  
    int choice =0;  
    while(choice != 9)   
    {  
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n4.display");  
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            add_begning();      
            break;  
            case 2:  
            add_end();         
            break;  
            case 3:  
            add_any();       
            break;
            case 4:
            display();  
            case 5:  
            exit(0);   
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}  