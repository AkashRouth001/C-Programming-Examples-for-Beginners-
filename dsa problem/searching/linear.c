#include<stdio.h>
int main ()
{
    int i,n,key,a[30];
    printf("enter number of elements  :");
    scanf("%d",&n);
    
    printf("enter the numbers :\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("enter the number for searching : ");
    scanf("%d",&key);
    for ( i = 0; i <n; i++)
    {
        if (key == a[i])
        {
            printf("%d is present in %d positin ",key,i+1);
            break;
        }
        
    }
    if (i==n)
    {
        printf("!! number is not present !!");
    }
    

}