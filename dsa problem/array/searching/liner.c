//linear seraching 
#include<stdio.h>
int main ()
{
    int i,size,key;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    printf("enter the numbers :\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the number for searching :");
    scanf("%d",&key);
    // searching point 
    for ( i = 0; i < size; i++)
    {
        if(a[i]==key)
        {
            printf("\n%d is present in the %d position ",key,i+1);
        }
    }
    if (i== size)
    {
        printf("\nthe number is not present \n");
    }
    
}