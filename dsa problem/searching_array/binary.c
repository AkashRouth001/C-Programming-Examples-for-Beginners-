//binary searching....
//in the binary searching all the element are sorted so we can not use unsorted array
#include<stdio.h>
void binary(int a[],int n,int key)
{
    int i;
    int h=n-1;//high position
    int l=0;//low position  
    int mid ; // middle position of array
    while(l<=h)
    {
        mid = (l+h)/2;
        if(a[mid]==key)
        {
            printf("%d is present in the %d position",key,mid);
        }
        else if (a[mid]>key)// so the key is present in the 1st pos to mid 
        {
            
        }
        
    }
    
}
int main()
{
    int i,n;
    printf("enter the size of array :");
    scanf("%d",&n);
    int a[n];
    printf("enter the numbers :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}