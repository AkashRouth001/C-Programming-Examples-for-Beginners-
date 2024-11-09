#include<stdio.h>
int binary(int a[],int n,int key)
{
    int mid ,l,r,h;
    l = 0;
    h = n -1;
    while (l<=h)
    {
        mid = (l+h)/2;
        if (a[mid]== key )
        {
            return mid ;
        }
        if (a[mid]>key)
        {
            h = mid-1;
        }
        else
        {
            l = mid+1;
        }
        
    }
    return -1;
}
int main()
{
    int n,i,key,search,a[20];
    printf("enter the number of elements :");
    scanf("%d",&n);
    printf("enter shorted the elements :\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the searching element:");
    scanf("%d",&key);
    search = binary(a,n,key);
    printf("%d is present at %d position ",key,search+1);
       
}