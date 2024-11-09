#include<stdio.h>
void marge(int a[],int lb,int hb,int mid)
{
    int i, j,k,b[20];

    i=lb;
    j=mid+1;
    k=lb;
    while (i<=mid && j<= hb)
    {
        if (a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    //if (i>mid)
    //{
        while (j<=hb)
        {
            b[k]=a[j];
            j++;
            k++;
        }
        
    //}
   // else
   // {
        while (i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
        
   // }
    for ( i = lb; i <= hb; i++)
    {
        a[i]=b[i];
    }
}
void mergeshort(int a[],int lb,int hb)
{
    int mid;
    if (lb<hb)
    {
        mid = (lb+hb)/2;
        mergeshort(a,lb,mid);
        mergeshort(a,mid+1,hb);
        marge(a,mid,lb,hb);
    }
    
}
int main()
{
    int n,i,a[20];
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the element :\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    mergeshort(a, 0, n - 1);
 
    printf("The sorted array is:\n ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}