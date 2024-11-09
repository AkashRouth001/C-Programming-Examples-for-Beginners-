//linear searching....
//in the linear searching there is unshorted array...
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the size of array :");
    scanf("%d",&n);
    int a[n+2];
    printf("enter the numbers :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //searching part
    int key;
    printf("enter the number for searching :");
    scanf("%d",&key);
    for ( i = 0; i < n; i++)
    {
        //do traversal to find the number 
        if(a[i]==key)
        {
            printf("\n%d is present in the %d position",key,i+1);
        }
    }
    if(i==n)
    {
        printf("... not present ...");
    }
    
}