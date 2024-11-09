// CIRCULAR QUEUE
#include<stdio.h>
#include<stdlib.h>
#define n 5
int queue[n];
// in the queue front and rear are started from -1 which is out of queue
int front = -1;
int rear = -1;
void enqueue( int x)// add the number in the queue
{
    if(front == -1 && rear == -1)// this mean that the queue is empty 
    {
        front = rear = 0;// that means enter in the array or queue box
        queue[rear]=x; 
    }
    else if((rear +1)%n == front)
    {
        /*[12][13][14][15][16] if in the circular queue front ---> 14(position: 2) 
        rear ---->13 (position 1) ////  then match the calculation (1+1)%5 = 2*/

        printf("!! ... OVERFLOW ... !!"); // the queue is full
    }
    else
    {
        rear = (rear + 1)% n; /* if we do rear++ , we get out of the queue 
        because this is a circular queue so we do this*/ 
        queue[rear]=x;
    }
}
void dequeue()// dellet : in the queue we dellet the element from frist 
{
    if(front == -1 && rear == -1)
    {
        printf("!!... under flow...!!");// the queue is empty
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("%d",queue[front]);
        front = (front+1)%n;
    }
}

void display ()
{
    int i = front ;
    if (front == -1 && rear == -1)
    {
        printf("!!...... the queue is empty .....!!");
    }
    else 
    {
        printf(" the queue is ");
        while(i!= rear)// we cant use the for loop because this is circular queue
        {
            printf("%d ",queue[i]);
            i = (i+1)%n;
        }
        printf("%d",queue[rear]);
    }
    
}
int main()
{
    int value, choice=1;
  
   while(choice<4 && choice!=0){
      printf("\n\n***** MENU *****\n");
      printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 enqueue(value);
		 break;
	 case 2: dequeue();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}