#include<stdio.h>
int main()
{
    float x[20],y[20][20],u,p,q,h,sum;
    int a,n,j,i;

    printf("enter the numbers of data : ");
    scanf ("%d",&n);
    printf("enter the value of x :\n");
    for(i=0;i<n;i++)
    {
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
    }

    printf("enter the valu of f(x)or y :\n");
    for(i=0;i<n;i++)
    {
        printf("y[%d,%d]=",i,0);
        scanf("%f",&y[i,0]);
    }

    for(i=1;i<n;i++)
    {
        for(j=n-1;j>i-1;j--)
        {
            y[j][i] = y[j][i-1] - y[j-1][i-1];
        }
        printf("\n");
    }

    printf("back diff table :\n");
    for ( i = 0; i < n; i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%0.2f",y[i][j]);
        }

        printf("\n");
    }
    printf("enter the interpolation point :");
    scanf("%d",&a);
    h=x[2]-x[1];
    u = (a-x[n-1])/h;
    sum = y[n-1][0];
    p=q=1;
    for(j=1;j<n;j++)
    {
        p = p*j;
        q= q*(u+j-1);
        sum = sum + ((q*y[n-1][j])/p);
    }
    printf("\n%0.4f",sum);

}