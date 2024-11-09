#include<stdio.h>
int main()
{
    int size,num,pos,i;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    printf("enter the number :\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("enter the position :");
    scanf("%d",&pos);
    if (pos <= 0 || pos > size-1)
    {
     printf("!! this not present !!");
    }
    else
    {
        for ( i = pos-1; i < size-1; i++)
        {
            a[i]=a[1+i];
        }
        size --;
        
    }
     for ( i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
}