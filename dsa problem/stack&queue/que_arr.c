// queue using array 
// in the we see that FIFO(frist input and frist output )
#include<stdio.h>
#define n 5 // give size of array
int queue[n];
int front = -1;
int rear = -1;
void enqueue(int x) // insertion of the queue
{
    if (rear == n-1)
    {
        printf("!!overflow!!");// overflow = the queue is full 
    }
    else if (front == -1 && rear == -1) // this chake the queue is empty 
    {
        front = rear = 0;
        queue[rear] = x; //put the frist input 
    }
    else
    {
        rear ++; // inseasing the rear to input the other value 
        queue[rear] = x;
    }
    
}
void dequeue()// dellet the value
{
    if (front == -1 && rear == -1)
    {
        printf("!! underflow !!"); // the queue is empty
    }
    else if (front == rear )// when queue is ended, the front and rear in tne same position 
    {
        front = rear = -1;
    }
    else
    {
        printf("%d",queue[front]);
        front++;
    }
    
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("!! the queue is empty !!");
    }
    else
    {
        for (int i = front; i < rear+1; i++)
        {
            printf("%d ",queue[i]);
        }
        
    }
    
}
void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("!! the queue is empty !!");
    }
    else
    {
        
     printf("%d ",queue[front]);
        
    }
}
int main()
{
    int value, choice;
  
   while(1){
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