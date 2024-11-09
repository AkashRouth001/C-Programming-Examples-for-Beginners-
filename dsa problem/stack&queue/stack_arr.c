// 6.stack using array 
#include<stdio.h>
#define n 5 // define the size
int stack [n];
int top = -1;

void push() // enter the number in the stack
{
    int x;
    printf("enter the data:");
    scanf("%d",&x);
    if (top == n-1) // (n-1) is the last position of the stack 
    {
        printf("...!!! OVERFLOW !!!...");
    }
    else
    {
        top ++;
        stack[top]=x;
    }
}
void pop()// put out data from stack
{
    int y;
    if (top == -1) // stack start from the 0 , the top = -1 so the stack empty
    {
        printf("...!!! under flow  !!!......");
    }
    else
    {
        y = stack[top]; // find the value which is poped
        top --;
        printf(" the poped data is = %d",y);// if we dont wnat to see the pop value then coment out the y=...&printf..
    }
}

void display()
{
    int i;
    for ( i = top; i >=0; i--)//
    {
        printf("%d ",stack[i]);
    }
    
}

int main(){

    int choice;

    printf("size of the stack is %d\n",n);
    while(1)
    {
        printf("\n!!!......MENU.......!!!");
        printf("\n1. push \n 2.pop \n 3.diplay \n 4.exit\n");
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
            exit(0);
            break;
        
        default:
            printf("!!....enter the right option....!!");
            break;
        }
    }

}
