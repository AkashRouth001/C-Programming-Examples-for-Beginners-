// insert the number ta in the array
#include<stdio.h>
int main()
{
    int pos,i,num,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[10];
    // 1st we creat the array
    printf("enter the number :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to insert :");
    scanf("%d",&num);
    printf("enter the position :");
    scanf("%d",&pos);
    //change all the number's position to empty the selacted position for entering nwe number 
    if(pos<1 || pos>n-1)
    {
        printf("\n....this is empty...\n");
    }
    else
    {
        for(i=n-1;i>=pos-1;i--)
        {
            a[i+1]=a[i]; // put all the number new position (1+present position)
        }
    }
    a[pos-1]=num;//put the new number
    n++;//incresing the size because new number is added
    printf("after adding the number :\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}