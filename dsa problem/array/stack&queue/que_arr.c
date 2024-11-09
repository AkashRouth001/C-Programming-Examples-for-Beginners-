// queueeeeeeeeeeeeeeeeeeee arrayyyyyyyyyyyy

#include<stdio.h>
#define n 5
int que[n];
int front =-1;
int rear = -1;

void enqueu(int x) // insertion of the queue
{
    if (rear == n-1)
    {
        printf("!!overflow!!");// overflow = the queue is full 
    }
    else if (front == -1 && rear == -1) // this chake the queue is empty 
    {
        front = rear = 0;
        que[rear] = x; //put the frist input 
    }
    else
    {
        rear ++; // inseasing the rear to input the other value 
        que[rear] = x;
    }
    
}
void dequeu()
{
    int y;
    if(rear == -1 && front == -1)
    {
        printf("underffffffffffffff");
    }
    else if (rear == front )
    {
        rear = front = -1;
    }
    else
    {
        printf("the dequeu element is %d",que[front]);
        front++;
    }
}
void display()
{
    if(rear == -1 && front == -1)
    {
        printf("underffffffffffffff");
    }
    else
    {
        for (int i = front; i < 1+rear; i++)
        {
            printf("%d ",que[i]);
        }
        
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
		 enqueu(value);
		 break;
	 case 2: dequeu();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}