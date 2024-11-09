#include<stdio.h>
int main()
{
    float x[20],y[20][20],h,sum,u,p,q;
    int i,j,n,a;

    printf("enter the no. of data :");
    scanf("%d",&n);

    printf("enter the value of x :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("enter the value of table :\n");
    for(i=0;i<n;i++)
    {
        printf("y[%d , %d]=",i,0);
        scanf("%f",& y[i][0]);
    }

    for ( i = 1; i < n; i++)
    {
        for ( j = 0; j < n-i; j++)
        {
            y[j][i] = y[j+1][i-1]-y[j][i-1]; 
        }
        
    }
    
    printf("the table is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j <n-i;j++)
        {
            printf("\t%0.2f",y[i][j]);
        }
        printf("\n");   
    }

    printf("\n enter the interpolation point :");
    scanf("%d",&a);
    h=x[2]-x[1];
    u =(a-x[0])/h;
    sum = y[0][0];
    p=q=1;

    for ( j = 1; j < n; j++)
    {
        p = p*j;
        q=q*(u-j+1);
        sum = sum + (q*y[0][j]/p);
    }
    
    printf("%0.4f",sum);
}