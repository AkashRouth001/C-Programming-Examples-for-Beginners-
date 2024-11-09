// stack using array .
#include<stdio.h>
#define n 5
int stack[n];
int top =-1;

void push()
{
    int x;
    printf("enter the data :");
    scanf("%d",&x);
    if(top == n-1)
    {
        printf("\n this is overflow \n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void pop()
{
    int y;
    if(top==-1)
    {
        printf("\n underflow \n");
    }
    else
    {
        y=stack[top];
        top--;

    }
}
void peek()
{
    
    
   printf("peek is %d\n",stack[top]);
    
    
}
void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n",stack[i]);
    }
    
}
int main()
{
    int choice;

    printf("size of the stack is %d\n",n);
    while(1)
    {
        printf("\n!!!......MENU.......!!!");
        printf("\n1. push \n 2.pop \n 3.diplay \n 4.peek\n5.exit\n");
        printf("\n enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
            break;
        
        default:
            printf("!!....enter the right option....!!");
            break;
        }
    }

}